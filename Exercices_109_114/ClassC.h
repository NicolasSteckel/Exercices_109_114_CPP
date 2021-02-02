#pragma once
#include <iostream>
#include "ClassA.h"
#include "ClassB.h"
using namespace std;

class C : public B, public A {
	int n;
	int p;
public :
	C (int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v) {
		n = n3;
		p = n1 + n2;
		cout << "** construction objet C : " << n << " " << p << "\n";
	}
};

/*C (int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v) donne
1 0; 1 1; 3 3; 1 5; 10 1; 12 21*/

/*C (int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : B(v) donne
1 0; 1 1; 3 3; 1 0; 10 1; 12 21*/

/*C (int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) donne
1 0; 2 1; 3 3; 1 0; 2 1; 12 21*/
