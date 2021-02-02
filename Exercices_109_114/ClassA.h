#pragma once
#include <iostream>
using namespace std;

class A {
	int n;
	float x;
public :
	A(int p = 2) {
		n = p;
		x = 1;
		cout << "** construction objet A : " << n << " " << x << "\n";
	}
};