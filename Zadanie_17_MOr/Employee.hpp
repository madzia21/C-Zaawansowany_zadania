#pragma once
#include <string>
#include <iostream>
#include <vector>

class Employee
{
public:
	enum class Gender
	{
		MALE,
		FEMALE,
		UNKNOWN
	};
	Employee(std::string firstName = "b/d", std::string lastName = "b/d", std::string email = "b/d", Gender gender = Gender::UNKNOWN, double salary =0.0);
	static Gender stringToGender(std::string str);
	static double stringToDouble(std::string str);
	void displayEmployeesList(std::vector<Employee> employeeList) const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	Gender getGender() const;
	double getSalary() const;
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmail(std::string email);
	void setGender(std::string gender);
	void setSalary(double salary);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _email;
	Gender _gender;
	double _salary;
	//......
};
std::ostream& operator<<(std::ostream& os,const Employee& e);
