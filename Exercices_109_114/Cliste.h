#pragma once
#include <iostream>

struct element {
	element* suivant = nullptr;
	void* contenu = nullptr;
};

class liste {
protected:
	element* debut;
	int curseur;
public :
	liste();
	~liste();
	void ajoute(void*);

	void* premier();
	void* prochain();

	int fini();
};