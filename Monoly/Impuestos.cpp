#include "Impuestos.h"

Impuestos::Impuestos(int PRECIO_CASILLA,string NOMBRE_CASILLA,int COLOR_PROPIEDAD,int DUENO): Casilla(PRECIO_CASILLA,NOMBRE_CASILLA,DUENO){
	this->PRECIO_CASILLA=PRECIO_CASILLA;
	this->NOMBRE_CASILLA=NOMBRE_CASILLA;
	this->dueno = DUENO;
	
}

Impuestos::~Impuestos() {
	
}
Impuestos::Impuestos(){
	PRECIO_CASILLA = 0.0;
	NOMBRE_CASILLA = " ";
}
void Impuestos:: set_dueno(int DUENO){
	this->dueno= DUENO;
}

void Impuestos:: set_precio_casilla(int PRECIO_CASILLA){
	this->PRECIO_CASILLA =PRECIO_CASILLA;
}
void Impuestos:: set_nombre_casilla(string NOMBRE_CASILLA){
	this->NOMBRE_CASILLA = NOMBRE_CASILLA;
}
int Impuestos::get_dueno(){
	return dueno;
}
int Impuestos:: get_precio_casilla(){
	return PRECIO_CASILLA;
}
string Impuestos :: get_nombre_casilla(){
	return NOMBRE_CASILLA;
}
string Impuestos::tostring(){
	stringstream s;
	s<<" ------------------ "<<endl;
	s<<"|    "<<NOMBRE_CASILLA<<endl;
	s<<"|------------------|"<<endl;
	s<<"| 1 servicio:      |"<<endl;
	s<<"| 10 veces el valor|"<<endl;
	s<<"| obtenido.        |"<<endl;
	s<<"|                  |"<<endl;
	s<<"| 2 servicios:     |"<<endl;
	s<<"| 20 veces el valor|"<<endl;
	s<<"| obtenido.        |"<<endl;
	s<<"|------------------|"<<endl;
	s<<"| Valor: $"<<PRECIO_CASILLA<<"    |"<<endl;
	s<<" ------------------ "<<endl;

	return s.str();
}

