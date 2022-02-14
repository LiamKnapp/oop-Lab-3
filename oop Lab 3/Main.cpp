//OOP Lab 3
//Liam, Tony, Ilyas

#include "Header.h"
#include "Square.cpp"
#include "Rectangle.cpp"

int squaremath(square s1, square s2)
{
	int Square_S; 
	Square_S = s1.area() * 2 + s2.area();
	cout << "Square S = S1*2 +S2 \n= "<<s1.area()<<"*2 + "<<s2.area()<<"\n= "<< Square_S <<endl; 
	return Square_S;  
}
int main() {
	square s1, s2;
	
	s1.setlength(6);
	s1.area();
	cout << "Area of square with dimensions, S1: (" << s1.getlength() << " " << s1.getlength() << ") Is: " << s1.area() << endl;
	s2.setlength(3);
	s2.area();
	cout << "Area of square with dimensions, S2: (" << s2.getlength() << " " << s2.getlength() << ") Is: " << s2.area() << endl;
	squaremath(s1, s2);
	
	

	rectangle r1; 
	r1.setlength(6); 
	r1.setwidth(2);  
	r1.area();  

	return 0;
}