#ifndef ANIMAUX_H
#define ANIMAUX_H

#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

class Animal{

	protected :
		int x,y,energie,direction,vie;
		static int nombre;
		static const char lettre='A';

	public :
		Animal(int x=0,int y=0,int energie=100):x(x),y(y),energie(energie){
			nombre++;
			if(energie>0){
					vie=1;
			}
		}

		int getX()const{return x;}
		int getY()const{return y;}
		int getEnergie()const{return energie;}
		int getDIR()const{return direction;}
		static int getNombre(){return nombre;}
		int getVie()const {return vie;}
		virtual char getLettre()const=0;

		void setX(int x=0);
		void setY(int y=0);
		void setEnergie(int energie=0);
		void setDIR(int dir=0);
		void setVie(int vie=0) ;
		virtual void affiche() const;
		void nvDir();
		bool samePosition(const Animal &anim)const{
			return x==anim.x && y==anim.y;}

		virtual ~Animal(){
			nombre--;
		}

};
#endif
