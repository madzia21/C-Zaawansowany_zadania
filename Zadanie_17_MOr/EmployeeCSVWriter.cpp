#include "EmployeeCSVWriter.hpp"
#include <fstream>
#include "Employee.hpp"

void EmployeeCSVWriter::writeEmployees(std::vector<Employee> employees, std::string filePath)
{
    std::string fileName(filePath);
    std::ofstream fout(fileName);
	if (fout.is_open())
	{
		std::cout << "File has been opened correctly." << fileName << std::endl;
		int i = 1;
		for (auto x : employees)
		{
			if (fout.good())
			{
				fout << i++ << ". " << x;
			}
		}
		fout.close();
	}
	else
	{
		std::cout << "Error. File cannot be opened.";
	}
}