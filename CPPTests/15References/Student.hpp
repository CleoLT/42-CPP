#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
private:
	std::string	_login;
public:
	Student(std::string const & login);
	std::string&		getLoginRef();
	std::string const &	getLoginRefConst();
	std::string*		getLoginPtr();
	std::string const *	getLoginPtrConst();
};

#endif
