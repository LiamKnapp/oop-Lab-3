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

int rectangleMath(rectangle r1, rectangle r2) {
	int Rectangle_R = r1.area() * 2 + r2.area();
	cout << "Rectangle R = R1*2 +R2 \n= " << r1.area() << "*2 + " << r2.area() << "\n= " << Rectangle_R << endl;
	return Rectangle_R;
}

int main() {
	square s1, s2;
	s1.setlength(6);
	s1.area();
	s1.printSquare(s1);
	s2.setlength(3);
	s2.area();
	s2.printSquare(s2);
	squaremath(s1, s2);

	rectangle r1, r2; 
	r1.setlength(6); 
	r1.setwidth(2);
	r1.printRectangle(r1);
	r2.setlength(4);
	r2.setwidth(8);
	r2.printRectangle(r2);
	rectangleMath(r1, r2);

	return 0;
}