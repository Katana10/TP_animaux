#include "animaux.h"

int Animal::nombre=0;

void Animal::setX(int x){
  this->x=x;
}

void Animal::setY(int y){
  this->y=y;
}

void Animal::setEnergie(int energie){
  this->energie=energie;
}

void Animal::setDIR(int dir){
  this->direction=dir;
}
void Animal::setVie(int vie){
  this->vie=vie;
}

void Animal::affiche()const{
  cout<<"x= "<<this->x<<", y= "<<this->y<<", energie= "<<this->energie<<", direction="<<this->direction<<'\n';
}

void Animal::nvDir(){
  int dir;
  dir=rand()%5; //1:Nord 2:Est 3:Sud 4:Ouest
  this->direction=dir;
  this->energie --;
  if(energie==0){
    this->vie=0;
  }

}
