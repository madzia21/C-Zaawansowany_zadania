#include "EmployeeCSVReader.hpp"
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

std::vector<Employee> EmployeeCSVReader::readEmployees(std::string filePath)
{
	// tutaj otworzyc plik, wczytac i sparsowac dane

	std::string line;
    std::string data;
    std::string::size_type i;
    std::string::size_type j;
    std::vector<Employee> employeesList;
    int employeeClassFieldsFinder = 1;

    std::string firstName;
    std::string lastName;
    std::string email;
    Employee::Gender gender = Employee::Gender::UNKNOWN;
    double salary = 0.0;

	std::string fileName(filePath);
	std::ifstream fin(fileName);
    if (fin.is_open())
    {
        std::cout << "File has been opened correctly." << fileName << std::endl;
    }
    else
    {
        std::cout << "Error. File cannot be opened.";
    }
    while (fin.good() && !fin.eof())
    {
            std::getline(fin, line);
            i = 0;
            while (i != line.size())
            {
                while (i != line.size() && line[i] == ',')
                {
                    ++i;
                }
                j = i;
                while (j != line.size() && line[j] != ',')
                {
                    ++j;
                }
                if (i != j)
                {
                    data = line.substr(i, j - i);
                    switch (employeeClassFieldsFinder)
                    {
                    case 1:
                        firstName = data;
                        break;
                    case 2:
                        lastName = data;
                        break;
                    case 3:
                        email = data;
                        break;
                    case 4:
                        gender = Employee::stringToGender(data);
                        break;
                    case 5:
                        salary = Employee::stringToDouble(data);
                        break;
                    default:
                        break;
                    }
                    ++employeeClassFieldsFinder;
                    i = j;
                }

            }
            employeeClassFieldsFinder = 1;
            employeesList.push_back(Employee(firstName, lastName, email, gender, salary));
    }
    fin.close();
    return employeesList;
}