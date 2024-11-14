#include "Student.hpp"
#include <iostream>
#include <string>


Student::Student(std::string const & login) : _login(login) {
}

std::string&	Student::getLoginRef() {
	return this->_login;
}

std::string const &	Student::getLoginRefConst() {
	return this->_login;
}

std::string*	Student::getLoginPtr() {
	return &(this->_login);
}

std::string const *	Student::getLoginPtrConst() {
	return &(this->_login);
}

int	main() {
	Student			bob = Student("BOB");
	Student			jim = Student("JIM");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst();
	std::cout << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobby";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "BOBBY";
	std::cout << *(bob.getLoginPtrConst()) << std::endl;
}
