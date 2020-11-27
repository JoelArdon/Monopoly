#ifndef IMPUESTOS_H
#define IMPUESTOS_H
#include "Terrenos.h"
class Impuestos : public Casilla {
private:
int PRECIO_CASILLA;
string NOMBRE_CASILLA;
int dueno;
protected:
public:
	Impuestos();
	Impuestos(int,string,int,int);
	  void set_precio_casilla(int PRECIO_CASILLA);
	void set_nombre_casilla(string NOMBRE_CASILLA);
	int get_precio_casilla();
	string get_nombre_casilla();
	string tostring();
	void  set_dueno(int DUENO);
	int get_dueno();
	
	~Impuestos();
};

#endif

