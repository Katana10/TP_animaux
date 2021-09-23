#include "animaux.h"

/*void Monde::affiche(){
    system("clear");
    for(int i=0;i<(this->nb_animaux);i++){
      tab[tableau[i].getX()][tableau[i].getY()]='A';
    }
    affiche_Monde();
    usleep(1000000);
}

void Monde::affiche_Monde(){
  for(int y=0;y<MAX_Y;y++){
    for(int x=0;x<MAX_X;x++){
      cout<<tab[x][y];
    }
    cout<<'\n';
  }
}

void Monde::creation_Monde(){
  for(int y=0;y<MAX_Y;y++){
    for(int x=0;x<MAX_X;x++){
      tab[x][y]=' ';
    }
  }
}

void Monde::affiche_A(){
  for(int i=0;i<nb_animaux;i++){
    tableau[i].affiche();
  }
}

void Monde::peuplement(){
  srand(time(NULL));
  int x,y,energie;
  for(int i=0;i<nb_animaux;i++){
    x=rand()% MAX_X;
    y=rand()% MAX_Y;
    energie=rand()% 100;
    tableau.push_back(Animal(x,y,energie));// Appel explicite cteur Animal
  }
}

void Monde::bouge(int i){

    tableau[i].nvDir();
    switch(tableau[i].getDIR()){
      case 1: //Nord
        if (tableau[i].getY()==0){
          tableau[i].setY(tableau[i].getY()+1);
        }else{
          tableau[i].setY(tableau[i].getY()-1);
        }
        break;
      case 2: //Est
        if (tableau[i].getX()==(MAX_X-1)){
          tableau[i].setX(tableau[i].getX()-1);
        }else{
          tableau[i].setY(tableau[i].getY()+1);
        }
        break;
      case 3: //Sud
        if (tableau[i].getY()==(MAX_Y-1)){
          tableau[i].setY(tableau[i].getY()-1);
        }else{
            tableau[i].setY(tableau[i].getY()+1);
        }
        break;
      case 4: //Ouest
        if (tableau[i].getX()== 0){
          tableau[i].setX(tableau[i].getX()+1);
        }else{
          tableau[i].setY(tableau[i].getY()-1);
        }
        break;
      }
  }*/
