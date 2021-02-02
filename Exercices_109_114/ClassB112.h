#pragma once
#include <iostream>
#include "ClassA112.h"

using namespace std;

class B2 : virtual public A2{
	float xb;
public:
	B2(float xx = 0.0) {
		xb = xx; 
		cout << "$$construction objet B : " << xb << "\n";
	}
};