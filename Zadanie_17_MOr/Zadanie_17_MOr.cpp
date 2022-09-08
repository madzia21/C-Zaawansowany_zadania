// Zadanie_17_MOr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "EmployeeCSVReader.hpp"
#include <vector>
#include "Employee.hpp"
#include "EmployeeCSVWriter.hpp"
#include <iostream>

int main()
{
    EmployeeCSVReader read;
    std::vector<Employee> employeesList;
    employeesList = read.readEmployees("employee_input.csv");
    std::cout << "koniec funkcji readEmployees()" << std::endl;
    std::vector<Employee>::size_type size = employeesList.size();
    std::cout << size << std::endl;
    for (auto x : employeesList)
    {
        std::cout << x;
    }
    std::cout << std::endl << "***************** test **********************" << std::endl;

    EmployeeCSVWriter writer;
    writer.writeEmployees(employeesList, "employee_output.csv");

    return 0;
}
