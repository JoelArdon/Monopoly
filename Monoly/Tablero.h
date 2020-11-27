#ifndef LISTA_H
#define LISTA_H
#include "Casilla.h"
#include <iomanip> 
#include <iostream>
#include "Dado.h"
#include "Jugador.h"
#include "ContenedorSuerte.h"
#include "Carcel.h"
class Tablero {
private: 

	int tamano;
	int cantidad;
	 Dado d5; //objeto tipo dado;
	 Casilla * vector[32];
	
protected:
public:
	
	Tablero();
	
	 void insertar_pos(int i, Casilla * elem);
	 void set_tamano(int);
	 void set_cantidad(int);
	 void insertar_casilla(Casilla*);
	 void  prueba(Jugador *j1);
	 void mover_jugador(Jugador * j1); // metodo que mueve el jugador por el vector
	 void  comprar_propiedad(Jugador *j1);//metodo para comprar una propiedad
	 void pagar_alquiler(Jugador *j1, Jugador *j2);//metodo para pagar el alquiler 
	 void hipotecar_propiedad(Jugador *j1);//metodo para hipotecar una propiedad 
	 void  propiedades_jugador(Jugador *j1);//metodo que improme las propiedades que posee el jugador
	 void eliminar_casilla();
	 void construir_hoteles(Jugador * j1);//metodo para construir casas o hoteles
	 void muestra_propiedades_hipotecadas();//metodo que muestra las propiedades que están hipotecadas en este momento
	 void deshipotecar_propiedades(Jugador * j1);//metodo para deshipotear propi
	 void establecer_monopolio(Jugador * j1);//metodo que te avisa cuando posees un monopolio;
	 void  Suerteee(Jugador * j1,ContenedorSuerte cont1,Jugador *j2);//Metodo que mueve el jugador por el vector y realiza las acciones neccesarias;
	int ganancias_total(Jugador * j1);//las ganancias totales del jugador contando las hipotecas
	int  cuantas_propiedades_jugador(Jugador *j1);// metodo que retorna cantidad de propiedades que posee el jugador
	int get_cantidad();
	int get_tamano();
	int lanzar();
	string tostring();
	~Tablero();
};

#endif

