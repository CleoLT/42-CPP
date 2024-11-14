#include "StudentArray.hpp"
#include <iostream>

StudentAr::StudentAr() : _login("default") {
	std::cout << "Student " << this->_login << " is born" << std::endl;
}

StudentAr::~StudentAr() {
	std::cout << "Student " << this->_login << " died" << std::endl;
}
