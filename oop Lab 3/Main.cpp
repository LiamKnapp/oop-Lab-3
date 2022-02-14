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
	cout << "Area of square with dimensions, S1: (" << s1.getlength() << " " << s1.getlength() << ") Is: " << s1.area() << endl;
	s2.setlength(3);
	s2.area();
	cout << "Area of square with dimensions, S2: (" << s2.getlength() << " " << s2.getlength() << ") Is: " << s2.area() << endl;
	squaremath(s1, s2);

	rectangle r1, r2; 
	r1.setlength(6); 
	r1.setwidth(2);
	cout << "\nArea of rectangle with dimensions: (" << r1.getlength() << ", " << r1.getwidth() << ") Is: " << r1.area() << endl;
	r2.setlength(4);
	r2.setwidth(8);
	cout << "Area of rectangle with dimensions: (" << r2.getlength() << ", " << r2.getwidth() << ") Is: " << r2.area() << endl;

	rectangleMath(r1, r2);


	return 0;
}