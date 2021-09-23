#ifndef GAZELLE_H
#define GAZELLE_H

#include "animaux.h"

class Gazelle : public Animal{
	public :
		Gazelle(int x=0,int y=0, int energie=0):Animal(x,y,energie){}
		~Gazelle(){}

		char getLettre()const {return lettre2;}
		void affiche() const{
      cout<<"x= "<<x<<", y= "<<y<<", energie= "<<energie
      <<", lettre = "<<lettre2<<", direction="<<direction<<'\n';
    }
		


	private :
		static const char lettre2='G';
};
#endif
