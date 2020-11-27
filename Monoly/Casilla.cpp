#include "Casilla.h"

Casilla::Casilla(int PRECIO_CASILLA,string NOMBRE_CASILLA,string COLOR_PROPIEDAD,float PRECIO_POR_CASA, float PRECIO_POR_HOTEL,float ALQUILER,int DUENO) {
	this->precio_casilla = PRECIO_CASILLA;
	this->nombre_casilla = NOMBRE_CASILLA;
	this->dueno = DUENO;
	this->color_propiedad=COLOR_PROPIEDAD;
	this->precio_por_casa =PRECIO_POR_CASA;
	this->precio_por_hotel = PRECIO_POR_HOTEL;
	this->alquiler = ALQUILER;
}

Casilla::Casilla(int PRECIO_CASILLA,string NOMBRE_CASILLA, int DUENO){
	this->precio_casilla=PRECIO_CASILLA;
	this->nombre_casilla = NOMBRE_CASILLA;
	this->dueno = DUENO;
}

Casilla::Casilla(string NOMBRE_CASILLA){
	this-> nombre_casilla = NOMBRE_CASILLA;
}

Casilla::Casilla(){
	precio_casilla=0;
	nombre_casilla= " ";
	dueno =0;
	alquiler=0;
		
	

}

Casilla::~Casilla() {
	
}

void Casilla:: set_precio_casiila(int PRECIO_CASILLA){
	this->precio_casilla = PRECIO_CASILLA;
}
void Casilla:: set_nombre(string NOMBRE_CASILLA){
	this->nombre_casilla = NOMBRE_CASILLA;
}
void Casilla:: set_dueno(int DUENO){
	this->dueno= DUENO;
}


void Casilla::set_color_propiedad(string COLOR_PROPIEDAD){
	this-> color_propiedad = COLOR_PROPIEDAD;
}
void Casilla::set_alquiler(float ALQUILER){
	this->alquiler = ALQUILER;
}
void Casilla::set_precio_hotel(float PRECIO_HOTEL){
	this->precio_por_hotel=PRECIO_HOTEL;
}
void Casilla::set_precio_casa(float PRECIO_CASA){
	this->precio_por_casa = PRECIO_CASA;
}
float Casilla::get_alquiler(){
	return alquiler;
}
float Casilla::get_precio_hotel(){
	return precio_por_hotel;
}
float Casilla::get_precio_casa(){
	return precio_por_casa;
}
int Casilla:: get_precio_casilla(){
	return precio_casilla;
}

string Casilla:: get_nombre_casilla(){
	return nombre_casilla;
}

int Casilla::get_dueno(){
	return dueno;
}



string Casilla:: get_color_propiedad(){
	return color_propiedad;
}

string Casilla:: tostring(){
	stringstream s;
	
	s<<"Nombre: "<<nombre_casilla<<endl;
	
	
	return s.str();
}
string Casilla::imprime_tablero(){
	cout<<"-----------"<<endl;
	cout<<nombre_casilla<<endl;
	cout<<precio_casilla<<endl;
	cout<<"------------";
}



	


