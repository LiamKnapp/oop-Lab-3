#include "Header.h"

class rectangle {
	int Length;
	int Width; // if its a square all sides are the same so you do not need this variable
public:
	void setlength(int a) { // set the length of the square
		Length = a;
	}
	int getlength(void) { // get the length of the square
		return Length;
	}

	void setwidth(int a) { // set width (not needed if shape is a square)
		Width = a;
	}
	int getwidth(void) { // set the width of the square
		return Width;
	}

	int area() { // calculate the area of the square
		int Area;
		Area = Length * Width;
		return Area;
	}

	void printRectangle(rectangle r) {
		cout << "Area of rectangle with dimensions: (" << r.getlength() << ", " << r.getwidth() << ") Is: " << r.area() << endl;
	}
};