#ifndef SUERTE_H
#define SUERTE_H
#include "Casilla.h"
class Suerte: public Casilla {
private:
	string descripcion;
	int accion;
protected:
public:
	int get_accion();
	void set_accion(int accion);
	Suerte(string,int,int,string);
	void setDescripcion(string);
	string getDescripcion();
	string toString();
	~Suerte();
};

#endif

