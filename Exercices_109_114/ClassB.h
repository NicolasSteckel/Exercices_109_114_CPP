#pragma once
#include <iostream>
using namespace std;

class B {
	int n;
	float y;
public :
	B(float v = 0.0) {
		n = 1;
		y = v;
		cout << "** construction objet B : " << n << " " << y << "\n";
	}
};