#include <iostream>
#include "Vertex.class.tpp"

int main() {
	Vertex<int>	v1( 12, 23, 34 );
	Vertex<>	v2( 12, 23, 34 ); //float por defecto

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}

