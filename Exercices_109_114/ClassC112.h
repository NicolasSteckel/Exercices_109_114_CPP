#pragma once
#include <iostream>
#include "ClassA112.h"

using namespace std;

class C2 : virtual public A2 {
	int nc;
public:
	C2(int nn = 2) : A2(2*nn+1) {
		nc = nn;
		cout << "$$construction objet C : " << nc << "\n";
	}
};