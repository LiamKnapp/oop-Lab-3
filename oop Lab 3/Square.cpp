#include "Header.h"

class square {
	int Length;
	int Width; // if its a square all sides are the same so you do not need this variable
public:
	void setlength(int a) { // set the length of the square
		Length = a;
		Width = Length;
	}
	//changed this function so that it doesn't take any parameters
	int getlength() { // get the length of the square
		return Length;
	}

	//void setwidth(int a) { // set width (not needed if shape is a square)
	//	cout << "Set Dimensions:" << endl;
	//	Width = a;
	//  Length = Width;
	//}
	//int getwidth(int a) { // set the width of the square
	//	return Length;
	//}

	// changed this function from void to int because I needed it to return a value to solve the equation
	int area() { // calculate the area of the square
		int Area;
		Area = Length * Width;
		//moved the message outside the function because it duplicate everytime the function is called in the equation
		//cout << "Area of square with dimensions: (" << Length << ", " << Width << ") Is: " << Area << endl;
		return Area;
	}
	void printSquare(square s) {
		cout << "Area of square with dimensions, S1: (" << s.getlength() << " " << s.getlength() << ") Is: " << s.area() << endl;
	}

};






