#include "Carcel.h"

Carcel::Carcel(string NOMBRE_CASILLA):Casilla(NOMBRE_CASILLA) {
	NOMBRE_CASILLA= NOMBRE_CASILLA;
	
}

Carcel::~Carcel() {
	NOMBRE_CASILLA = " ";
}

void Carcel:: cobra_carcel(Jugador *j1){
	j1->set_balance(j1->get_balance()-d3.cobra_carcel());
	
}
string Carcel::tostring(){
stringstream s;
s<<" ------------------ "<<endl;
s<<"|   	"<<NOMBRE_CASILLA<<"       |"<<endl;
s<<"|------------------|"<<endl;
s<<"|         HAS      |"<<endl;
s<<"|        Caido     |"<<endl;
s<<"|        en la     |"<<endl;
s<<"|        Carcel    |"<<endl;
s<<"|                  |"<<endl;
s<<"|                  |"<<endl;
s<<"|                  |"<<endl;
s<<"|                  |"<<endl;
s<<"|                  |"<<endl;
s<<" ------------------ "<<endl;
}
