#include "Tren.h"

Tren::Tren(int PRECIO_CASILLA,string NOMBRE_CASILLA,float ALQUILER,int DUENO): Casilla(PRECIO_CASILLA,NOMBRE_CASILLA,DUENO){
	this->ALQUILER= ALQUILER;

	this->DUENO=DUENO;
}

Tren::~Tren() {
	
}
Tren::Tren(){
	ALQUILER=0,0;
	DUENO=0;
}

void Tren:: set_alquiler(float ALQUILER){
	this->ALQUILER=ALQUILER;
}

float Tren:: get_alquiler(){
	return ALQUILER;
}

string Tren::tostring(){
	stringstream s;
	s<<" ---------------------- "<<endl;
	s<<"|     "<<nombre_casilla<<endl;
	s<<"|----------------------|"<<endl;
	s<<"| Renta:"<<endl;
	s<<"| 1 estacion: $"<<ALQUILER<<endl;
	s<<"| 2 estacion: $"<<ALQUILER*2<<endl;
	s<<"| 3 estacion: $"<<ALQUILER*3<<endl;
	s<<"| 4 estacion: $"<<ALQUILER*4<<endl;
	s<<"|----------------------|"<<endl;
	s<<"|Valor: $"<<precio_casilla<<endl;
	s<<" ----------------------"<<endl;
	return s.str();
}
