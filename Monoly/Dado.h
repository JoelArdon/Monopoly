#ifndef DADO_H
#define DADO_H

#include<iostream>
#include<sstream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
using namespace std;
class Dado {
private:
	int cara;
public:
	Dado();
	
	Dado(int cara);
	~Dado();
	
	int getCara();
	void imprimir_dado();
	int cobra_carcel();// metodo retorna un valor entre 20 y 300
	virtual int lanzar();//metodo que retorna el valor de los dados
};


#endif


