#include"element.h"
//#include<iostream>
//using namespace std;

Element::Element(int x, int y, int z) {
	/*X = x;
	Y = y;
	Z = z;*/
	SetX(x);
	SetY(y);
	SetZ(z);
}

int Element::GetX()const {
	return X;
}

int Element::GetY()const {
	return Y;
}

int Element::GetZ()const {
	return Z;
}

void Element::SetX(int x) {
	X = x;
}

void Element::SetY(int y) {
	Y = y;
}

void Element::SetZ(int z) {
	Z = z;
}