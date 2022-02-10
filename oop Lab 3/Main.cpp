//OOP Lab 3
//Liam, Tony, Ilyas

#include "Header.h"
#include "Square.cpp"
#include "Rectangle.cpp"

int main() {
	square s1;
	s1.setlength(6);
	s1.area();

	rectangle r1;
	r1.setlength(6);
	r1.setwidth(2);
	r1.area();

	return 0;
}