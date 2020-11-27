#ifndef CONTENEDORSUERTE_H
#define CONTENEDORSUERTE_H
#include <stdlib.h>
#include "Suerte.h"
#include "time.h"
#include "Jugador.h"
class ContenedorSuerte{
private:
	Suerte* vecSuerte[17];
	int accion;
	int tamano;
	int cantidad;


protected:
public:
	ContenedorSuerte();

	
	void insertarElemento(Suerte*);
	void setCantidad(int);
	void setCartaSuerte(Suerte*);
	void LlamaMetodos(Jugador * j1);
	void SacaCarta();
	void Avanzar(Jugador *j1);
	Suerte* getCartaSuerte();
	int getCantidad();
	int getTamano();
	int Suertealazar();
	
	string toString1();
	~ContenedorSuerte();
};

#endif

