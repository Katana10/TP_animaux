#ifndef LION_H
#define LION_H

#include "animaux.h"


class Lion: public Animal{

	public :
		Lion(int x=0,int y=0, int energie=0):Animal(x,y,energie){
		}
		~Lion(){}

		char getLettre()const{return lettre2;}
		void affiche()const{
      cout<<"x= "<<this->x<<", y= "<<y<<", energie= "<<energie
      <<", lettre = "<<lettre2<<", direction="<<direction<<'\n';
    }

		

	private :
		static const char lettre2='L';
};
#endif
