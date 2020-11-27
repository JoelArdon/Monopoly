#include "Tablero.h"

Tablero::Tablero() {
	cantidad = 0;
	tamano = 32;
		for(int i = 0; i < tamano; i++)
			vector [cantidad] = NULL;
	
}

Tablero::~Tablero() {
	
	for(int i = 0; i< cantidad;i++){	
		delete vector[i];
	}
		
}

void Tablero:: set_cantidad(int can){
	if((can <= tamano)&& (can > 0))
		cantidad = can;
}
int Tablero:: get_cantidad(){
	return cantidad;
}

int Tablero:: get_tamano(){
	return tamano;
}

void Tablero::insertar_casilla( Casilla * elem){
	if(cantidad <tamano){
		vector[cantidad] = elem;
		cantidad = cantidad+1;
		
	}
}
void Tablero::insertar_pos(int i, Casilla * elem){
	if(cantidad <tamano){
		vector[i] = elem;
		cantidad = cantidad+1;
		
	}
}
void Tablero:: eliminar_casilla(){
	set_cantidad(cantidad-1);
	delete vector[cantidad];
	vector[cantidad]=NULL;
}
void  Tablero::mover_jugador(Jugador * j1){
        int 	i = j1->get_posicion();
		//d5.lanzar metodo para obtener los dados del 1 al 12
	
			if(i+d5.lanzar()<30){ 
			cout<<"Usted ha caido en la casilla :"<<endl;
			cout<<vector[i+d5.lanzar()]->tostring()<<endl;
			j1->set_posicion(i+d5.lanzar());
			}
			else
			if(i+d5.lanzar()>30){
				int r=(i+d5.lanzar()-30);
				j1->set_posicion(r);
				cout<<vector[r]->tostring()<<endl;
				j1->set_balance(j1->get_balance()+200);
				cout<<"Usted ha pasado por go reciba 200, Su balance ahora es "<< j1->get_balance()<<endl;
			}
			
			
		}
		
		
		


void Tablero:: comprar_propiedad(Jugador *j1){
	char respuesta;
	int  i = j1->get_posicion();
	cout<<"¿Te gustaria comprar ésta propiedad? (S/N) "<<endl;
	cin>>respuesta;
	while ((respuesta != 'S') && (respuesta != 'N')){
		cout << "Porfavor digite 'S' o 'N': ";
		cin>>respuesta;
	
	}
	if(respuesta == 'S'){
		if((j1->get_balance() > vector[j1->get_posicion()]->get_precio_casilla()) && (vector[i]->get_dueno() == 0)){
			 j1->set_balance(j1->get_balance()-vector[j1->get_posicion()]->get_precio_casilla());
			 vector[i]->set_dueno(j1->get_jugador_actual());
			 cout<<"Compro la propiedad " <<vector[i]->get_nombre_casilla()<<endl;
			 cout<<"Su balance actual es "<<j1->get_balance()<<endl; 
		}
			  else cout<<"Esta propiedad ya tiene dueno o no tiene suficiente dinero para comprarla"<<endl;
		}
	establecer_monopolio(j1);//cuando compras 3 propiedades del mismo color estableces un monopolio
	}




void Tablero::pagar_alquiler(Jugador *j1, Jugador *j2){
	int i=j1->get_posicion(); int j=j2->get_posicion();
	
	if(vector[i]->get_dueno()!=0){
		if(vector[i]->get_dueno() == 1){
			cout<<"Esta propiedad tiene dueno debe pagar un alquiler"<<endl;
			
			j2->set_balance(j2->get_balance()-vector[i]->get_alquiler());
			j1->set_balance(j1->get_balance()+vector[i]->get_alquiler());
			cout<<"Su balance ahora es "<<j2->get_balance()<<endl;
		}
		else
			if(vector[i]->get_dueno() == 2){
				cout<<"Esta propiedad tiene dueno debe pagar un alquiler"<<endl;
				j1->set_balance(j1->get_balance()-vector[i]->get_alquiler());
			     j2->set_balance(j2->get_balance()+vector[i]->get_alquiler());
			cout<<"Su balance ahora es :"<<j1->get_balance()<<endl;
		}
		}

	}

void Tablero::muestra_propiedades_hipotecadas(){
	for(int i = 0; i<31;i++){
		if(vector[i]->get_dueno() == 3){
			cout<<vector[i]->tostring()<<endl;
		}
	}
}
void Tablero::deshipotecar_propiedades(Jugador * j1){
	cout<<"Estas son las propiedades disponibles para deshipotecar"<<endl;
	muestra_propiedades_hipotecadas();
	string propiedad;
	cout<<"Digite el nombre de la propiedad que desea deshipotecar"<<endl;
	cin>>propiedad;
	
	for(int i=0; i<31;i++){
		if((vector[i]->get_nombre_casilla()==propiedad)&&(vector[i]->get_dueno() == 3)){
			int r = vector[i]->get_precio_casilla()/4;
			j1->set_balance(j1->get_balance()-r*0.2);
			vector[i]->set_dueno(j1->get_jugador_actual());
			cout<<"Este es su balance actual"<<endl;
			cout<<j1->get_balance()<<endl;
		}
	}
		
}

void Tablero::hipotecar_propiedad(Jugador *j1){
	char respuesta;
	string propiedad;
	int cont;
	cout<<"¿Te gustaria hipotecar alguna propiedad? (S/N) "<<endl;
	cin>>respuesta;
	while ((respuesta != 'S') && (respuesta != 'N')){
		cout << "Porfavor digite 's' o 'n': "<<endl;
		cin>>respuesta;
		
	}
	if(respuesta == 'S'){
		cout<<"Estas son las propiedades disponibles para hipotecar"<<endl;
		propiedades_jugador(j1);
		
		      cout<<"Digite el nombre de la propiedad que desea vender "<<endl;	
					cin>>propiedad;
				
			for(int i=0; i<31; i++){
				
		               if(vector[i]->get_nombre_casilla() == propiedad){
						   if(j1->get_jugador_actual() == vector[i]->get_dueno()){
						   
					   
					j1->set_balance(j1->get_balance()+(vector[i]->get_precio_casilla()/4));// se hipoteca a un cuarto de lo que costó la propiedad
					vector[i]->set_dueno(3);
					cout<<"Este es su balance actual"<<endl;
					cout<<j1->get_balance()<<endl;
					}
						   else cout<<"No posee esta propiedad"<<endl;
					}
					   
				
		}		
	
}

}
void Tablero:: propiedades_jugador(Jugador *j1){
	for(int i = 0; i<31;i++){
		if((vector[i]->get_dueno() != 0)&&(vector[i]->get_dueno() != 3)&&(j1->get_jugador_actual()==vector[i]->get_dueno())){
				
				cout<<vector[i]->tostring()<<endl;
				
			}
		}

		
	}



void Tablero::construir_hoteles(Jugador * j1){
	int cont = 0;
	string  color;
	
	
	
	
			cout<<"Digite el color en que desea construir 1 para rojo, 2 para verde, 3 para azul, 4 para amarillo  "<<endl;
			cin>>color;
			while((color != "rojo") &&(color != "verde")&&(color != "azul")&&(color != "amarillo")){
				cout<<"Por favor digite uno de los colores disponibles"<<endl;
				cin>>color;
				cout<<color;
		}

		
	
	for(int i =0; i<31;i++){
		if((vector[i]->get_dueno() == j1->get_jugador_actual())&&(vector[i]->get_color_propiedad() == color)){
			cout<<"Estas son las propiedades de ese colorque posee"<<endl;
			cout<<vector[i]->tostring();

				cont = cont+1;
			}
		}
	if(cont == 3){
		int casas;
		string propiedad;
		cout<<"Cuantas casas desea construir, digite 5 para hoteles"<<endl;
		cin>>casas;
		while((casas!=1)&&(casas!=2)&&(casas!=3)&&(casas!=4)&&(casas!=5)){
			cout<<"Porfavor digite un numero de casas valido"<<endl;
			cin>>casas;
			cout<<casas;
		}
		cout<<"digite el nombre de la propiedad en que desea constuir"<<endl;
		cin>>propiedad;
		cout<<propiedad;
		
		
		for(int i=0; i<31;i++){
			if((vector[i]->get_nombre_casilla() == propiedad)&&(casas<=4)&&(vector[i]->get_dueno() == j1->get_jugador_actual())){
				vector[i]->set_alquiler(vector[i]->get_alquiler()+(vector[i]->get_precio_casa()*casas));
				cout<<vector[i]->get_alquiler();
			}
			else 
			   if((vector[i]->get_nombre_casilla() == propiedad)&&(casas == 5)){
				   vector[i]->set_alquiler(vector[i]->get_alquiler()+(vector[i]->get_precio_hotel()));
			   }
		}
		
	}
	
	else 
	   cout<<"Usted no posee todas las propiedades de ese color"<<endl;
}
			
		
	
void Tablero::establecer_monopolio(Jugador * j1){
	int cont = 0;
	for(int i=0; i<31;i++){
		
		if(((vector[i]->get_dueno() == j1->get_jugador_actual())&&(vector[i]->get_color_propiedad()=="rojo"))){
			cont = cont+1;
		}
	
}
	cout<<cont;
	if (cont == 3){
		cout<<"Posee un monopolio en las propiedaes de color rojo"<<endl;
		
	}
	int cont1 = 0;
	for(int i=0; i<31;i++){
		
		if(((vector[i]->get_dueno() == j1->get_jugador_actual())&&(vector[i]->get_color_propiedad()=="verde"))){
			cont1 = cont1+1;
		}
	}  
	if (cont1 == 3){
		cout<<"Posee un monopolio en las propiedaes de color verde"<<endl;
		
	}
	int cont2 = 0;
	for(int i=0; i<31;i++){
		
		if(((vector[i]->get_dueno() == j1->get_jugador_actual())&&(vector[i]->get_color_propiedad()=="amarillo"))){
			cont2 = cont2+1;
		}
		
	}
	if (cont2==3){
		cout<<"Posee un monopolio en las propiedaes de color amarillo"<<endl;
		
	}
	int cont3 = 0;
	for(int i=0; i<31;i++){
		
		if(((vector[i]->get_dueno() == j1->get_jugador_actual())&&(vector[i]->get_color_propiedad()=="azul"))){
			cont3 = cont3+1;
		}
		
	}

	if (cont3 == 3){
		cout<<"Posee un monopolio en las propiedaes de color azul"<<endl;
		
	}
		

}




void Tablero:: Suerteee(Jugador * j1,ContenedorSuerte cont1,Jugador * j2){
	
	int i=j1->get_posicion();
	d5.imprimir_dado();
	mover_jugador(j1);
	pagar_alquiler(j1,j2);
	if(vector[j1->get_posicion()]->get_nombre_casilla() == "Suerte"){
		
		cont1.LlamaMetodos(j1);
		cout<<vector[j1->get_posicion()]->tostring();
	}
	if(vector[j1->get_posicion()]->get_nombre_casilla() == "Carcel"){
		j1->set_balance(j1->get_balance()-d5.cobra_carcel());
	}
	if(vector[j1->get_posicion()]->get_nombre_casilla() == "Impuesto"){
		j1->set_balance(j1->get_balance()-vector[j1->get_posicion()]->get_precio_casilla());
	}
	
	
}
int  Tablero::ganancias_total(Jugador * j1){
	int suma_total = j1->get_balance();
	for(int i= 0; i<31; i++){
		if(vector[i]->get_dueno() == j1->get_jugador_actual()){
	suma_total = suma_total+ (vector[i]->get_precio_casilla()/4);
			
		}
	}
	return suma_total;
	
}
int Tablero:: cuantas_propiedades_jugador(Jugador *j1){
	int cont=0;
	for(int i = 0; i<31;i++){
		if((vector[i]->get_dueno() != 0)&&(vector[i]->get_dueno()!=3)&&(j1->get_jugador_actual() == vector[i]->get_dueno())){
			
			cont= cont+1;
			
		}
	}
	return cont;
}


string Tablero:: tostring(){
	stringstream s;
	s<<" ---------------------------------------------------------------------------------------------------"<<endl;
	s<<"|  Parking |  Avenida |    Luz   |  Avenida |  Heredia | ???????? |   Tren   | Impuesto |  Ve a la  |"<<endl;
	s<<"|   Free   |   Perez  |   $225   |  Central |   Media  | ???????? |   $200   |   $180   |   Carcel  |"<<endl;
	s<<"|          |   $200   |          |   $250   |   $450   | ???????? |          |          |           |"<<endl; 
	s<<" ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ----------- "<<endl;
	s<<"|  Mirador |                                                                            | Lagunilla |"<<endl;
	s<<"|   $300   |                                                                            |  Escuela  |"<<endl;
	s<<"|          |                                                                            |    $400   |"<<endl;
	s<<" ----------                                                                              ----------- "<<endl;
	s<<"|   Finca  |                                                                            |   Calle   |"<<endl;
	s<<"|  Miramar |                                                                            |Los Perdido|"<<endl;
	s<<"|   $300   |                                                                            |   $230    |"<<endl;
	s<<" ----------                                                                              ----------- "<<endl;
	s<<"| ???????? |                                                                            | ????????? |"<<endl;
	s<<"| ???????? |                                ------------                                | ????????? |"<<endl;
	s<<"| ???????? |                               |   CARTAS   |                               | ????????? |"<<endl;
	s<<" ----------                                |            |                                ----------- "<<endl;
	s<<"|   Zona   |                               |   DE  LA   |                               |   Calle   |"<<endl;
	s<<"|  Franca  |                               |            |                               |  Soledad  |"<<endl;
	s<<"|   $285   |                               |   SUERTE   |                               |   $280    |"<<endl;
	s<<" ----------                                |            |                                ----------- "<<endl;
	s<<"|   Tren   |                                ------------                                | ????????? |"<<endl;
	s<<"|   $200   |                                                                            | ????????? |"<<endl;
	s<<"|          |                                                                            | ????????? |"<<endl;
	s<<" ----------                                                                              ----------- "<<endl;
	s<<"| ???????? |                                                                            |    Tren   |"<<endl;
	s<<"| ???????? |                                                                            |    $200   |"<<endl;
	s<<"| ???????? |                                                                            |           |"<<endl;
	s<<" ----------                                                                              ----------- "<<endl;
	s<<"| Impuesto |                                                                            | ????????? |"<<endl;
	s<<"|  $180    |                                                                            | ????????? |"<<endl;
	s<<"|          |                                                                            | ????????? |"<<endl;
	s<<" ---------- ---------- ---------- ---------- ---------- ---------- ---------- ---------- ----------- "<<endl;
	s<<"||||||||||||  Avenida |  Avenida |   Tren   |  Avenida | ???????? |   Agua   | ???????? |<-<-<-<-<-<|"<<endl;
	s<<"|||Carcel|||  Camaano |   Toros  | Atlantico|   Lopez  | ???????? |   $230   | ???????? |<-<-<GO-<-<|"<<endl;
	s<<"||||||||||||   $540   |   $100   |   $200   |   $230   | ???????? |          | ???????? |<-<-<-<-<-<|"<<endl;
	s<<" --------------------------------------------------------------------------------------------------- "<<endl;
	
	
	return s.str();
}



