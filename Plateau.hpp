#pragma once
#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>

#include "case.hpp"
#include "pioche.hpp"
#include "joueur.hpp"
#include "typeDef.hpp"

using namespace std;

//Classe Plateau

class Plateau
{
  private:
    vector<Case> cases;
		Pioche pioche;
    vector<Joueur*> joueurs;

		Tortue *tortueBleue = new Tortue(Couleur bleu);
		Tortue *tortueVerte = new Tortue(Couleur vert);
		Tortue *tortueRouge = new Tortue(Couleur rouge);
		Tortue *tortueJaune = new Tortue(Couleur jaune);
		Tortue *tortueViolette = new Tortue(Couleur violet);

	public :
	  Plateau(int nbJoueurs);
		void ajouterJoueur(Joueur * monJoueur); 
		void tourDeJeu();
    //string toString();
    //friend std::ostream& operator<< (ostream &, Carte &);
};

//--------------------------
//Constructeur
//--------------------------
Carte::Plateau(int nbJoueurs = 5){
	//init cases
  for (int i=0; i++; i<10){
		Case newCase(i)
		cases.push_back(newCase);
	}
	//init tortues
	cases[0].addTortue(tortueBleue);
	cases[0].addTortue(tortueVerte);
	cases[0].addTortue(tortueRouge);
	cases[0].addTortue(tortueJaune);
	cases[0].addTortue(tortueViolette);

	//init Joueurs
	Joueur joueur1("J1", Couleur bleu);
	joueurs.push_back(joueur1);
	Joueur joueur2("J2", Couleur vert);
	joueurs.push_back(joueur2);
	Joueur joueur3("J3", Couleur rouge);
	joueurs.push_back(joueur3);
	Joueur joueur4("J4", Couleur jaune);
	joueurs.push_back(joueur4);
	Joueur joueur5("J2", Couleur violet);
	joueurs.push_back(joueur5);
	
}

//--------------------------
//Méthodes diverses
//--------------------------
void Plateau::ajouterJoueur(Joueur * monJoueur){
	Joueurs.push_back(monJouu)
	
} 


void Plateau::tourDeJeu(){
	
}

/*
string Carte::toString(){
	
}

std::ostream& operator<< (ostream &os, Carte &c){
  os << c.toString();
  return os;
}
*/