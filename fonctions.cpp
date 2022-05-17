/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "fonctions.h"
#include <array>
#include <time.h>
using namespace std;


int
calculResultatDe ()
{
  int resultat = 0;
  srand (time (0));
  resultat = rand () % NOMBRE_FACES + 1;
  return resultat;
}