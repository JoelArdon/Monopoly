#ifndef CASILLA_H
#define CASILLA_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Casilla {
private:
protected:
	string color_propiedad; // 1 = rojo, 2 = verde, 3  = azul , 4 = amarillo
	int precio_casilla;
	string nombre_casilla;
	int alquiler;
	int  dueno; // 1 = le pertenece a Jugador 1, 2 le pertence a jugador  2, 3 propiedad hipotecada 0 propiedad del banco
	float precio_por_casa;
	float precio_por_hotel;
public:
	Casilla();
	Casilla(int,string,string,float,float,float,int);
	Casilla(int,string,int);
	Casilla(string);
	virtual void set_dueno(int DUENO);
	virtual void set_color_propiedad(string);
	void set_precio_casiila(int PRECIO_CASILLA);
	void set_nombre(string NOMBRE_CASILLA);
	virtual void set_precio_casa(float PRECIO_CASA);
	virtual void set_precio_hotel(float precio_hotel);
	

	virtual string get_color_propiedad();
	void set_alquiler(float ALQUILER);
	float get_alquiler();
	virtual float get_precio_casa();
	virtual float get_precio_hotel();

	int get_precio_casilla();
	
	string get_nombre_casilla();

	string devuelve_string();
	string tablero_impresion();
	string imprime_tablero();

	virtual string tostring();

	
	virtual int get_dueno();

	
	~Casilla();
};

#endif

