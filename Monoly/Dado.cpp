#include "Dado.h"

Dado::Dado(int cara) {
	
	this->cara = cara;
	
}

Dado::Dado(){
	this->cara = 0;
}

Dado::~Dado() {
	
}

int Dado::getCara(){
	return this->cara;
}

int Dado::lanzar(){
	int num = 0, i;
	srand(time(NULL));
	
	
	num = 1+rand()%(13-1);
	return num;
}

int Dado::cobra_carcel(){
	int num=0, i;
	srand(time(NULL));
	
	
	num = 1+rand()%(300-20);
	return num;
}

void Dado::imprimir_dado(){
	
	cout<<"Sacaste un "<<lanzar()<<endl;
}

