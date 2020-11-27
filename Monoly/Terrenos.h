#ifndef TERRENOS_H
#define TERRENOS_H
#include "Casilla.h"
#include <windows.h>

using namespace std;

class Terrenos : public Casilla {
private:
	int dueno;
	string color_propiedad;
	float alquiler;
	float precio_por_hotel;
	float precio_por_casa;


	
protected:
	
public:
	
	Terrenos(int,string,float,int,float,float,string);
	Terrenos();
	void set_alquiler(float ALQUILER);
	void set_color_propiedad(string);
	void set_dueno(int DUENO);
	void set_precio_casa(float);
	void set_precio_hotel(float);
	string get_nombre_casilla();
	string get_color_propiedad();
	float get_alquiler();
	int get_dueno();
	float get_precio_hotel();
	float get_precio_casa();
	string tostring();
	~Terrenos();
};

#endif

