#include "Cliste.h"

liste::liste() {				//Constructeur
	this->debut = nullptr;		//initialisation de "debut" � "null" et de curseur � sa valeur par d�faut 0
	curseur = 0;
}

liste::~liste() {				//Destructeur
	delete debut;
}

void liste::ajoute(void* ncontenu){
	element* elem = new element;
	elem->suivant = this->debut;
	elem->contenu = ncontenu;
	this->debut = elem;
}

void* liste::premier() {
	this->curseur = 0;				//place le curseur sur la valeur 0 de la liste
	return this->debut->contenu;
}


void* liste::prochain(){
	int i = 0;
	curseur++;
	element* elem = this->debut;
	while (i < curseur)
	{
		if (elem->suivant == nullptr)	//V�rifie si l'�l�ment suivant est "null", si oui, on passe au prochain
			return elem->contenu;
			elem = elem->suivant;
			i++;
	}
	return elem->contenu;				//Si l'�l�ment suivant n'est pas "null", on retourne son contenu
}

int liste::fini(){
	int i = 0;
	element* elem = this->debut;
	while (elem->suivant != nullptr) //Tant que "suivant" n'est pas "null" on continue de se d�placer dans la liste
	{
		elem = elem->suivant;
		i++;
	}
	return (curseur == i); //revois la place du curseur, ce qui correspond � la place du dernier �l�ment de la liste
}