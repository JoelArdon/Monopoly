#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "Casilla.h"
#include <iostream>
#include <sstream>
#include "Terrenos.h"
#include "Impuestos.h"
#include "Tren.h"
#include "Tablero.h"
#include "Jugador.h"
#include "Dado.h"
#include "ContenedorSuerte.h"	
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
class interfaz {
private:
	
protected:
public:
	
	void menu_de_inicio();
	void juega_jugador1(Jugador * ,Jugador *);
	void juega_jugador2(Jugador * ,Jugador *);
	void juega_ambos(Jugador *j1, Jugador *j2);
	void ganador(Jugador * j1, Jugador *j2);
	ContenedorSuerte cont1;
	Tablero l1;	
	
	
	interfaz();
	~interfaz();
};

#endif

