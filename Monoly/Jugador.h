#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Jugador {
private:
	string nombre;
	int balance;
	int posicion; // posicion en el Tablero
	int numero_jugador;

protected:
public:
	

	Jugador();
	Jugador(string,int,int,string,int,int);
	void set_balance(int BALANCE);
	void set_posicion(int POSICION);
	void set_nombre(string nombre);
	string get_nombre();
	int get_balance();
	int get_posicion();
	string tostring();
	int get_jugador_actual();
	
	~Jugador();
};

#endif

