#include <iostream>
#include "ClassC.h"
#include "ClassD112.h"
#include "Liste_points.h"
using namespace std;

int main(){
	C ci;
	C c2(10, 11, 12, 5.0);

	//Exercice 112 - Exercice 113
	cout << "\n Exercices 112 - 113" << endl;
	D2 d(10, 20, 5.0);

	//Exercice 114
	cout << "\n Exercice 114" << endl;
	liste_points liste;
	Lpoint a(1, 1);
	Lpoint b(6, 7);

	liste.ajoute(&a);
	liste.affichage();

	liste.ajoute(&b);
	liste.affichage();

}