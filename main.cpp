#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "animal.h"
#include "attaque.h"
#include "pierre.h"
#include "loup.h"

using namespace std;

int main() {
//Déclaration variables
  int maxX; //Dimension X du plateau
  int maxY; //Dimension Y du plateau
  int i;
  int j;

  
//Mise en place du plagteau
  cout << "dimension X et Y plateau?" << endl;
  cin >> maxX>> maxY;
  for (i=0;i<maxX;i++){
    cout << "|----"<< endl;
    cout << "|"<< endl;
    cout << "|"<< endl;
    for (j=0;j<maxX;j++){
      cout << "|----";
    }
  }
}












/*  void() {  
    //Déclaration variables
    int maxX; //Dimension X du plateau
    int maxY; //Dimension Y du plateau
    int nbra; //Nombre d'animaux restant en vie
    bool jeu; //Volonter de contnuer ou non
    char *a;  //Pointeur sur la décision du joueur
  
    //Mise en place du plagteau
    cout << "dimension X et Y plateau?" << endl;
    cin >> maxX>> maxY >> endl;
    string plateau[maxX][maxY];
  
    //Teste s'il reste des animaux pour jouer ou non
    if (nbra==0){
      cout << "Plus aucun animal vivant" << endl;
      break;
    }
    else if (nbra!=0){
      
      //Déroulement du jeu
      
      while (jeu=true){ //Tant que le joueur veut jouer
  
  
        
        cout << "A:Continuer B:Arrêter" << endl;  //Choix du joueur de continuer ou non
        cin >> &a;
          if (*a==A){
            jeu = true;
            }
          else if (*a==B){
            jeu = false;
            }
        
        }
      
      }
  }
}

*/