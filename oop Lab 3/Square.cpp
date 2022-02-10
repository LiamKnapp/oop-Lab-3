#include "Header.h"

class square {
	int Length;
	int Width; // if its a square all sides are the same so you do not need this variable
public:
	void setlength(int a) { // set the length of the square
		Length = a;
		Width = Length;
	}
	int getlength(int a) { // get the length of the square
		return Length;
	}

	//void setwidth(int a) { // set width (not needed if shape is a square)
	//	cout << "Set Dimensions:" << endl;
	//	Width = a;
	// Length = Width;
	//}
	//int getwidth(int a) { // set the width of the square
	//	return Length;
	//}

	void area() { // calculate the area of the square
		int Area;
		Area = Length * Width;
		cout << "Area of square with dimensions: (" << Length << ", " << Width << ") Is: " << Area << endl;
	}
};