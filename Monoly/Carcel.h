#ifndef CARCEL_H
#define CARCEL_H
#include "Jugador.h"
#include "Dado.h"
#include "Casilla.h"
class Carcel: public Casilla {
private:
	string NOMBRE_CASILLA;
	Dado d3;
protected:
public:
	void cobra_carcel(Jugador * j1);
	Carcel(string);
	~Carcel();
	string tostring();
};

#endif

