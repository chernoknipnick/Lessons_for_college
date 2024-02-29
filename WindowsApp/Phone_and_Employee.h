#pragma once // Phone_and_Employee.h
#include <iostream>
#include <string>

struct Phone {
	std::string cod_county, cod_city, number;
};
void in_Phone(Phone& phone) {
	std::cout << "Enter cod country: "; std::cin >> phone.cod_county;
	std::cout << "Enter cod city: "; std::cin >> phone.cod_city;
	std::cout << "Enter number: "; std::cin >> phone.number;
}
void out_Phone(Phone phone) {
	std::cout << "\n+" << phone.cod_county << "(" << phone.cod_city << ")" << phone.number;
}

struct employee {
	std::string name, sername, major;
	Phone phone;
};
void in_emloyee(employee& employee) {
	std::cout << "\nEnter name: "; std::cin >> employee.name;
	std::cout << "Enter sername: "; std::cin >> employee.sername;
	std::cout << "Enter major: "; std::cin >> employee.major;
	std::cout << "Enter phone"; in_Phone(employee.phone);

}
void out_employee(employee employee) {
	std::cout << "Name: " << employee.name << "\nSername: " << employee.sername << "\nMajor: " << employee.major;
	out_Phone(employee.phone);
}
