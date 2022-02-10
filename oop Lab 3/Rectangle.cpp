#include "Header.h"

class rectangle {
	int Length;
	int Width; // if its a square all sides are the same so you do not need this variable
public:
	void setlength(int a) { // set the length of the square

		Length = a;
	}
	int getlength(int a) { // get the length of the square
		return Length;
	}

	void setwidth(int a) { // set width (not needed if shape is a square)
		Width = a;
	}
	int getwidth(int a) { // set the width of the square
		return Width;
	}

	void area() { // calculate the area of the square
		int Area;
		Area = Length * Width;
		cout << "Area of rectangle with dimensions: (" << Length << ", " << Width << ") Is: " << Area << endl;
	}
};