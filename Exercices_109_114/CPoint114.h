#pragma once
#include <iostream>
using namespace std;

class Lpoint {
	int x, y;
public :
	Lpoint(int abs = 0, int ord = 0) {
		x = abs;
		y = ord;
	}
	void affiche() {
		cout << "Coordonnees : " << x << " " << y << "\n";
	}
};