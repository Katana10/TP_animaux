//#include "animaux.h"
#include "monde.h"


int main(){
  Monde mars(20);
  int var=1;

srand(time(NULL));
mars.affiche();
while(var){

  mars.passeuntour();
  var=mars.verifVie();
  mars.affiche();
  mars.creation_Monde();
}

cout<<"Tout les animaux sont morts"<<'\n';


  return 0;
}
