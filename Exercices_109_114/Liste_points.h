#pragma once
#include "CPoint114.h"
#include "Cliste.h"

class liste_points : public liste, public Lpoint {
public :
	liste_points();
	void affichage();
	Lpoint* premier();
	Lpoint* prochain();
	
};
