#include "ContenedorSuerte.h"

ContenedorSuerte::ContenedorSuerte() {
	accion=0;
	cantidad=0; 
	tamano= 17; 
	for(int i=0;i< tamano;i++)
		vecSuerte[i]=0;
} 

int ContenedorSuerte::getCantidad(){
	return cantidad;
}

int ContenedorSuerte::getTamano(){
	return tamano; 
}

void ContenedorSuerte::setCantidad(int can) {
	if ((can < tamano)&&(can >0))
		cantidad = can;      
}

void ContenedorSuerte::insertarElemento(Suerte* ptrSuerte ){
	if (cantidad < tamano){
		vecSuerte[cantidad]=ptrSuerte; 
	}
	setCantidad(cantidad+1); 
	
} 
void ContenedorSuerte:: SacaCarta(){
	
	for(int i=0;i<17;i++) {
		if(vecSuerte[Suertealazar()]==vecSuerte[Suertealazar()]){
			
		}
		
	}
	cout<< vecSuerte[Suertealazar()]->toString();
}
void ContenedorSuerte:: Avanzar(Jugador * j1){
	
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="Avanza"){
		j1->set_posicion(j1->get_posicion()+vecSuerte[Suertealazar()]->get_precio_casilla());
		if(j1->get_posicion()>30){
			int r = (j1->get_posicion()-30);
			j1->set_posicion(r);
		}
	}
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="SumaDinero"){
		j1->set_balance(j1->get_balance()+vecSuerte[Suertealazar()]->get_precio_casilla());
	}
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="RestaDinero"){
		j1->set_balance(j1->get_balance()-vecSuerte[Suertealazar()]->get_precio_casilla());
	}
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="Retrocede"){
		j1->set_posicion(j1->get_posicion()-vecSuerte[Suertealazar()]->get_precio_casilla());
	}
	
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="SetPosCarcel"){
		j1->set_posicion(8);
	}
	if(vecSuerte[Suertealazar()]->get_nombre_casilla()=="SetPosGo"){
		j1->set_posicion(0);
	}
}


void  ContenedorSuerte::LlamaMetodos(Jugador *j1){
	SacaCarta();
	Avanzar(j1);
	
}
string ContenedorSuerte::toString1(){
	stringstream s;
	for(int i=0;i<17;i++) {
		s<<vecSuerte[i]->toString()<<endl; 
	}
	return s.str();
} 
int ContenedorSuerte:: Suertealazar(){
	int num=0;
	srand(time(NULL));
	
	
	num = 1+rand()%(15-1);
	return num;
}


ContenedorSuerte::~ContenedorSuerte() {
	
}
