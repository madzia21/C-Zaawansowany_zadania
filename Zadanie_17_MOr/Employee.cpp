#include "Employee.hpp"
#include <map>
#include <vector>

Employee::Employee(std::string firstName, std::string lastName, std::string email, Gender gender, double salary) 
	: _firstName(firstName)
	, _lastName(lastName)
	, _email(email)
	, _gender(gender)
	, _salary(salary)
{
}

Employee::Gender Employee::stringToGender(std::string str)
{
	std::map<std::string, Gender> stringToEnum
	{
		{"Female", Gender::FEMALE},
		{"Male", Gender::MALE}	
	};
	Gender gender;
	auto it = stringToEnum.find(str);
	if (it != stringToEnum.end())
	{
		gender = it->second;
	}
	else
	{
		gender = Gender::UNKNOWN;
	}
	return gender;
}

double Employee::stringToDouble(std::string str)
{
	if (str[0] < 48 || str[0] > 57)
		return 0.0;
	else
		return std::stod(str);
}

void Employee::displayEmployeesList(std::vector<Employee> employeeList) const
{
	for (auto x : employeeList)
	{
		std::cout << x;
	}
}

std::string Employee::getFirstName() const
{
	return _firstName;
}

std::string Employee::getLastName() const
{
	return _lastName;
}

std::string Employee::getEmail() const
{
	return _email;
}

Employee::Gender Employee::getGender() const
{
	return _gender;
}

double Employee::getSalary() const
{
	return _salary;
}

void Employee::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void Employee::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void Employee::setEmail(std::string email)
{
	_email = email;
}

void Employee::setGender(std::string gender)
{
	_gender = stringToGender(gender);
}

void Employee::setSalary(double salary)
{
	_salary = salary;
}

std::ostream& operator<<(std::ostream& os,const Employee& e)
{
	os
		<< "imię: " << e.getFirstName()
		<< ", nazwisko: " << e.getLastName()
		<< ", email: " << e.getEmail();
	if (e.getGender() == Employee::Gender::FEMALE)
		os << ", płeć: Female";
	if (e.getGender() == Employee::Gender::MALE)
		os << ", płeć: Male";
	if (e.getGender() == Employee::Gender::UNKNOWN)
		os << ", płeć: Unknown";
	os 
		<< ", wynagrodzenie: " << e.getSalary() 
		<< std::endl;

	return os;
	//throw gcnew System::NotImplementedException();
	// // O: insert return statement here
}
