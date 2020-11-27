#ifndef TREN_H
#define TREN_H
#include "Casilla.h"
class Tren: public Casilla {
private:
	float ALQUILER;
	int DUENO;
protected:
public:
	Tren(int,string,float,int);
	void set_alquiler(float);
	float get_alquiler();
	string tostring();
	Tren();
	~Tren();
};

#endif

