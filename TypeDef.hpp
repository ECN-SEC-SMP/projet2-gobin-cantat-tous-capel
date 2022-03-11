#pragma once
#include <stdio.h>

using namespace std;

//plus = plus
//m = moins
//f = fleche
typedef enum{
  plus,
  plusplus,
  moins,
  moinsmoins,
  fleche,
  flechefleche
}Symbole;

typedef enum{
  bleu, 
	vert, 
	rouge, 
	jaune, 
	violet,
  neutre,
  dernier
}Couleur;