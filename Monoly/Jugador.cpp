#include "Jugador.h"

Jugador::Jugador() {
nombre = " ";
balance = 1500;
posicion = 0;
numero_jugador = 0;






}

Jugador::~Jugador() {
	
}

Jugador::Jugador(string NOMBRE,int BALANCE,int POSICION,string CARCEL,int SALIR_CARCEL,int NUMERO_JUGADOR){
	nombre = NOMBRE;
	balance = BALANCE;
	posicion = POSICION;
	numero_jugador = NUMERO_JUGADOR;
}
void Jugador:: set_balance(int BALANCE){
	balance = BALANCE;
}
void Jugador:: set_posicion(int POSICION){
	posicion = POSICION;
}

void Jugador::set_nombre(string nombre){
	this->nombre = nombre;
}
string Jugador:: get_nombre(){
	return nombre;
}

int Jugador :: get_jugador_actual(){
	return numero_jugador;
}
int Jugador:: get_balance(){
	return balance;
}
int Jugador:: get_posicion(){
	return posicion;
}


string Jugador::tostring(){
	stringstream s;
	
	s<<"Nombre "<<nombre<<endl;
	s<<"Balance $"<<balance<<endl;
	return s.str();
}
