#include "Suerte.h"

Suerte::Suerte(string NOMBRE_CASILLA, int PRECIO_CASILLA,int DUENO, string descripcion):Casilla(PRECIO_CASILLA,NOMBRE_CASILLA,DUENO) {
	this->descripcion=descripcion;
	
	
}
void Suerte::setDescripcion(string descripcion){
	this->descripcion=descripcion;
}
string Suerte::getDescripcion(){
	return descripcion;
}

string Suerte::toString(){
	stringstream s;
	s<<"Suerte:"<<endl;
	s<<descripcion<<endl;
	return s.str();
}
Suerte::~Suerte() {
	
}


