#include "Terrenos.h"

Terrenos::Terrenos(int PRECIO_CASILLA,string NOMBRE_CASILLA,float ALQUILER,int DUENO,float PRECIO_POR_CASA,float PRECIO_POR_HOTEL,string COLOR_PROPIEDAD):Casilla(PRECIO_CASILLA,NOMBRE_CASILLA,COLOR_PROPIEDAD,PRECIO_POR_HOTEL,PRECIO_POR_CASA,ALQUILER,DUENO){

this->alquiler = ALQUILER;
this->precio_por_hotel = PRECIO_POR_HOTEL;
this->precio_por_casa = PRECIO_POR_CASA;
this->color_propiedad = COLOR_PROPIEDAD;
this->nombre_casilla = NOMBRE_CASILLA;
this->dueno = DUENO;

}
Terrenos::Terrenos(){
	alquiler = 0,0;
	precio_por_hotel= 0,0;
	precio_por_casa = 0,0;
}
Terrenos::~Terrenos() {
	
}

void Terrenos::set_alquiler(float ALQUILER){
	alquiler = ALQUILER;
}
void Terrenos::set_dueno(int DUENO){
	dueno=DUENO;
}
void Terrenos::set_color_propiedad(string COLOR_PROPIEDAD){
	color_propiedad = COLOR_PROPIEDAD;
}
void Terrenos::set_precio_hotel(float PRECIO_HOTEL){
	precio_por_hotel = PRECIO_HOTEL;
}
void Terrenos::set_precio_casa(float PRECIO_CASA){
	precio_por_casa = PRECIO_CASA;
}

float Terrenos:: get_alquiler(){
	return alquiler;
}
float Terrenos::get_precio_hotel(){
	return precio_por_hotel;
}
float Terrenos::get_precio_casa(){
	return precio_por_casa;
}
int Terrenos::get_dueno(){
	return dueno;
}
string Terrenos:: get_color_propiedad(){
	return color_propiedad;
}

string Terrenos::get_nombre_casilla(){
	return nombre_casilla;
}


string Terrenos::tostring(){
	stringstream s;
	s<<" -------------------------------------------- "<<endl;
	s<<"|        "<<nombre_casilla<<endl;
	s<<"| Color: "<<color_propiedad<<endl;
	s<<"| Alquiler"<<endl;
	s<<"| Solar sin edificar: $"<<alquiler<<endl;
	s<<"| Con 1 casa:  $"<<precio_por_casa<<endl;
	s<<"| Con 2 casas: $"<<precio_por_casa*2<<endl;
	s<<"| Con 3 casas: $"<<precio_por_casa*3<<endl;
	s<<"| Con 4 casas: $"<<precio_por_casa*4<<endl;
	s<<"| Si un jugador posee todas las propiedades"<<endl;
	s<<"| de un mismo color el precio de alquiler se"<<endl;
	s<<"| duplica."<<endl;
	s<<"|--------------------------------------------"<<endl;
	s<<"| Precio de construccion:                    "<<endl;
	s<<"| Costo x casa: $"<<precio_por_casa<<endl;
	s<<"| Costo x hotel:100 $"<<precio_por_hotel <<endl;
	s<<"|--------------------------------------------"<<endl;
	s<<"| Valor Hipotecario: $"<<precio_casilla/4<<endl;
	s<<" -------------------------------------------- "<<endl;
	return s.str();
}

	
