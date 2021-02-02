#pragma once
#include <iostream>

using namespace std;

class A2 {
	int na;
public :
	A2(int nn = 1) {
		na = nn; 
		cout << "$$construction objet A : " << na << "\n";
	}
};