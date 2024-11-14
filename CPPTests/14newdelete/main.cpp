#include "Login.hpp"
#include "StudentArray.hpp"


int main( void ) {
	Student		bob = Student("Bobby");
	Student*	jim = new Student("Jimmy");
	StudentAr*	students = new StudentAr[5];

	delete [] students;
	delete jim;
	return (0);
}

