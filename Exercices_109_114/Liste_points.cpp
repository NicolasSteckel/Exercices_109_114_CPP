#include "Liste_points.h"

liste_points::liste_points() : liste(){
}


Lpoint* liste_points::premier(){
	element* p = this->debut;
	return static_cast<Lpoint*>(p->contenu);  //convertion du pointeur en pointeur de Lpoint
}

Lpoint* liste_points::prochain(){
	return static_cast<Lpoint*>(liste::prochain());	//convertion du résultat de la fonction prochain() en pointeur de Lpoint
}

void liste_points::affichage() {
	Lpoint* ptr = this->premier();	//On appelle la fonction premier et on y passe le pointeur ptr
	ptr->affiche();					//On appelle la fonction affiche et on y passe ptr
	while (!this->fini()){			//Tant que laliste n'est pas terminée pn passe au prochain élément et on l'affiche
		ptr = this->prochain();
		ptr->affiche();
	}
}
