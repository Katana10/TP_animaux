//#include "animaux.h"
#include "Lion.h"
#include "Gazelle.h"

class Monde{
  public:
    //Constructeur
    Monde(int nb=0):nb_animaux(nb){
      creation_Monde();
      peuplement();


    }
    //Fonctions
    int getMax_X()const{return MAX_X;}
    int getMax_Y()const{return MAX_Y;}
    int getNBanimaux()const{return nb_animaux;}

    void affiche(){
        system("clear");
        for(int i=0;i<nb_animaux;i++){
          if(tableau[i]->getEnergie()>0){ //Si l'animal a encore de l'endu
            tab[tableau[i]->getX()][tableau[i]->getY()]= tableau[i]->getLettre();
          }else{
            tab[tableau[i]->getX()][tableau[i]->getY()]='X';
          }
        }

        affiche_Monde();
        usleep(200000);
  }

    void affiche_Monde(){
      for(int y=0;y<MAX_Y;y++){
        for(int x=0;x<MAX_X;x++){
          cout<<tab[x][y];
        }
        cout<<'\n';
      }
    }

    void creation_Monde(){
      for(int y=0;y<MAX_Y;y++){
        for(int x=0;x<MAX_X;x++){
          tab[x][y]=' ';
        }
      }
    }

    void affiche_A(){
      for(int i=0;i<nb_animaux;i++){
        tableau[i]->affiche();
      }
    }

    void peuplement(){
      //srand(time(NULL));
      int x,y,energie, choix_Animaux=0;
      for(int i=0;i<nb_animaux;i++){
        choix_Animaux= rand()%2;
        x=rand()% MAX_X;
        y=rand()% MAX_Y;
        energie=rand()% 100;
        std::cout << choix_Animaux;
        if(choix_Animaux==0){
          tableau.push_back(new Gazelle(x,y,energie));// Appel explicite cteur Animal
        }else if (choix_Animaux==1){
          tableau.push_back(new Lion(x,y,energie));
        }
      }
    }

    void bouge(int i){
        if(tableau[i]->getEnergie()>0){ //Si l'animal a encore de l'endu
          tableau[i]->nvDir();
          switch(tableau[i]->getDIR()){
            case 1: //Nord
              if (tableau[i]->getY()==0){
                tableau[i]->setY(tableau[i]->getY()+1);
              }else{
                tableau[i]->setY(tableau[i]->getY()-1);
              }
              break;
            case 2: //Est
              if (tableau[i]->getX()==(MAX_X-1)){
                tableau[i]->setX(tableau[i]->getX()-1);
              }else{
                tableau[i]->setX(tableau[i]->getX()+1);
              }
              break;
            case 3: //Sud
              if (tableau[i]->getY()==(MAX_Y-1)){
                tableau[i]->setY(tableau[i]->getY()-1);
              }else{
                  tableau[i]->setY(tableau[i]->getY()+1);
              }
              break;
            case 4: //Ouest
              if (tableau[i]->getX()== 0){
                tableau[i]->setX(tableau[i]->getX()+1);
              }else{
                tableau[i]->setX(tableau[i]->getX()-1);
              }
              break;
            }
        }
    }

void passeuntour(){
    for(int i=0;i<nb_animaux;i++){
        bouge(i);
        manger(i);

    }
}

void manger(int i){
  for (int j=0;j<nb_animaux;++j){
    if( tableau[i]->getX()==tableau[j]->getX()&& tableau[i]->getY()== tableau[i]->getY()){
      if (tableau[i]->getLettre()=='G' && tableau[j]->getLettre()=='L'){
        tableau[i]->setEnergie(0);
      }else if (tableau[j]->getLettre()=='G' && tableau[i]->getLettre()=='L'){
        tableau[j]->setEnergie(0);
      }
    }
  }
}

int verifVie(){
    int sommeV=0;
    for(int i=0;i<nb_animaux;i++){
      sommeV=tableau[i]->getVie()+sommeV;
    }
    if(sommeV==0){
      return 0;
    }
    return 1;
  }



    //Destructeur
    ~Monde(){}

  private:
    static const int MAX_X=20,MAX_Y=20;
    int nb_animaux;
    char tab[MAX_X][MAX_Y];
    vector<Animal *> tableau;
};
