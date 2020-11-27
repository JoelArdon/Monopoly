#include "interfaz.h"

interfaz::interfaz() {
	Casilla *t1 = new Terrenos(200,"AvenidaPerez",80,0,40,100,"Rojo");
	Casilla *t2 = new Terrenos(250,"AvenidaCentral",90,0,50,110,"Rojo");
	Casilla *t3 = new Terrenos(450,"HerediaMediaCalle",160,0,100,200,"Rojo");
	Casilla *t4 = new Terrenos(400,"LagunillaEscuela",140,0,80,180,"Verde");
	Casilla *t5 = new Terrenos(230,"Callelos Perdidos",90,0,50,160,"Verde");
	Casilla *t6 = new Terrenos(280,"CalleSoledad",100,0,60,170,"Verde");
	Casilla *t7 = new Terrenos(230,"AvenidaLopez",90,0,50,150,"Azul");
	Casilla *t8 = new Terrenos(100,"AvenidaToros",40,0,20,80,"Azul");
	Casilla *t9 = new Terrenos(540,"AvenidaCamano",180,0,120,240,"Azul");
	Casilla *t10 = new Terrenos(285,"ZonaFranca",100,0,130,190,"Amarillo");
	Casilla *t11 = new Terrenos(300,"FincaMiramar",120,0,140,210,"Amarillo");
	Casilla *t12 = new Terrenos(300,"Mirador",80,0,110,150,"Amarillo");	
	Casilla *i1 = new Impuestos(230,"AGUA",100,0);
	Casilla *i2 = new Impuestos(225,"LUZ",100,0);
	Casilla *tr1 = new Tren(200,"Atlantico",100,0);
	Casilla *tr2 = new Tren(200,"Paquera",100,0);
	Casilla *tr3 = new Tren(200,"Quirres",100,0);
	Casilla *tr4 = new Tren(200,"Limon",100,0);
	Casilla *c= new Tren(200,"Carcel",100,5);
	Casilla *s1 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s2 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s3 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s4 = new Suerte("Suerte",0,4,"Suerte");	
	Casilla *s5 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s6 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s7 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *s8 = new Suerte("Suerte",0,4,"Suerte");
	Casilla *g = new Tren(200,"Go",100,0);
	
	Casilla *c1 = new Tren(200,"Carcel1",100,5);
	Casilla *p1 = new Tren(200,"Parking free",100,5);
	Casilla *imp1 = new Impuestos(180,"Impuesto",0,5);
	Casilla *imp2 = new Impuestos(160,"Impuesto",0,5
								  );
	
	l1.insertar_pos(0,g);
	l1.insertar_pos(1,s1);
	l1.insertar_pos(2,i1);
	l1.insertar_pos(3,s2);
	l1.insertar_pos(4,t7);
	l1.insertar_pos(5,tr1);
	l1.insertar_pos(6,t8);
	l1.insertar_pos(7,t9);
	l1.insertar_pos(8,c);
	l1.insertar_pos(9,c);
	l1.insertar_pos(9,imp1);	
	l1.insertar_pos(10,s3);
	l1.insertar_pos(11,tr2);
	l1.insertar_pos(12,t10);
	l1.insertar_pos(13,s4);
	l1.insertar_pos(14,t11);
	l1.insertar_pos(15,t12);
	l1.insertar_pos(16,p1);
	l1.insertar_pos(17,t1);
	l1.insertar_pos(18,i2);
	l1.insertar_pos(19,t2);
	l1.insertar_pos(20,t3);
	l1.insertar_pos(21,s5);
	l1.insertar_pos(22,tr3);
	l1.insertar_pos(23,imp2);
	l1.insertar_pos(24,c1);
	l1.insertar_pos(25,t4);
	l1.insertar_pos(26,t5);
	l1.insertar_pos(27,s6);
	l1.insertar_pos(28,t6);
	l1.insertar_pos(29,s7);
	l1.insertar_pos(30,tr4);
	l1.insertar_pos(31,s8);
	Suerte *sue1=new Suerte("SetPosCarcel",0,0,"Ve a la carcel");
	Suerte *sue2=new Suerte("SetPosGo",0,0,"Ve a la casilla GO");
	Suerte *sue3=new Suerte("SumaDinero",600,0,"Recibes una herencia de un familiar el cual no sabias que existia, cobras $600");
	Suerte *sue4=new Suerte("RestaDinero",200,0,"Te han puesto una multa por no recoger lo que deja tu perro en el parque, pagas $200");
	Suerte *sue5=new Suerte("Retrocede",2,0,"Rompes la interfaz grafica de Ubuntu, retrocede dos lugares");
	Suerte *sue6=new Suerte("SumaDinero",400,0,"Inventas un nuevo codigo que hace que Win funcione 0.01% mas rapido, cobras $400");
	Suerte *sue7=new Suerte("RestaDinero",500,0,"No aguantas mas el estres de programar,dejas todo y te vas en crucero 15 dias por el Caribe, pagas $500");
	Suerte *sue8=new Suerte("Avanza",2,0,"Salvas Progra1, avanza 2 espacios");
	Suerte *sue9=new Suerte("RestaDinero",200,0,"No sabes que es un string, pagas $200");
	Suerte *sue10=new Suerte("SumaDinero",200,0,"Lanzaste tu Monopoly en PS4, cobras $200");
	Suerte *sue11=new Suerte("RestaDinero",300,0,"Hakeaste un satelite Ruso y se dieron cuenta, pagas $300");
	Suerte *sue12=new Suerte("SetPosCarcel",0,0,"Compraste servidores robados en Siquirres, vas a la carcel");
	Suerte *sue13=new Suerte("SumaDinero",400,0,"Metiste gol de rabona en la final de la Champions, cobras $400");
	Suerte *sue14=new Suerte("Avanza",4,0,"Le ganas a Bill Gates en el Buscaminas, avanza 4 espacios");
	Suerte *sue15=new Suerte("Retrocede",1,0,"No logras salvar el semestre, retrocede 1 espacio");
	Suerte *sue16=new Suerte("SumaDinero",300,0,"Ganas la loteria, cobras $300");
	
	cont1.insertarElemento(sue1);
	cont1.insertarElemento(sue3);
	cont1.insertarElemento(sue4);
	cont1.insertarElemento(sue5);
	cont1.insertarElemento(sue6);
	cont1.insertarElemento(sue7);
	cont1.insertarElemento(sue8);
	cont1.insertarElemento(sue9);
	cont1.insertarElemento(sue10);
	cont1.insertarElemento(sue11);
	cont1.insertarElemento(sue12);
	cont1.insertarElemento(sue13);
	cont1.insertarElemento(sue14);
	cont1.insertarElemento(sue15);
	cont1.insertarElemento(sue16);
	
	
	
	
	
}
void interfaz::juega_jugador2(Jugador * j2,Jugador *j1){
	cout<<l1.tostring();
	string respuesta;
	string respuesta2;
	while(respuesta !="F"){
		cout<<j2->tostring();
		
		cout<<"Presiona D para lanzar los dados"<<endl;
		cin>>respuesta;
		system("cls");
		cout<<l1.tostring();
		if(respuesta == "D"){
			l1.Suerteee(j2,cont1,j1);
			
			while((respuesta!="F")){
				cout<<j2->tostring();
				cout<<"Presione C para comprar esta propiedad"<<endl;
				cout<<"Presione V para hipotecar"<<endl; 
				cout<<"Presione P para mostar las propiedades que posee"<<endl;
				cout<<"Presione F para terminar el turno"<<endl;
				cout<<"Presione G para terminar el juego "<<endl;
				cout<<"Presiona E para construir casas o hoteles"<<endl;
				cout<<"Presiona S para deshipotecar una propiedad"<<endl;
				cin>>respuesta;
				
				if(respuesta=="P"){
					l1.propiedades_jugador(j2);
					Sleep(3000);
					system("cls");
					cout<<l1.tostring();
					
				}
				if(respuesta == "C"){
					l1.comprar_propiedad(j2);
					Sleep(3000);
					system("cls");
					cout<<l1.tostring();
				}
				if (respuesta == "V"){
					l1.hipotecar_propiedad(j2);
					Sleep(3000);
					system("cls");
					cout<<l1.tostring();
				}
				if(respuesta =="G"){
					respuesta="D";
					cout<<"Seguro que quiere terminar el Juego (S/N)"<<endl;
					juega_ambos(j1,j2);
				}
				if(respuesta=="A"){
					cout<<l1.ganancias_total(j2);
					Sleep(3000);
					system("cls");
					cout<<l1.tostring();
				}
				if(respuesta=="E"){
					l1.construir_hoteles(j2);
					Sleep(3000);
					system("cls");
					cout<<l1.tostring();
				}
				if(respuesta=="S"){
				   l1.deshipotecar_propiedades(j2);
				   Sleep(3000);
				   system("cls");
				   cout<<l1.tostring();
				   
				
			}
		}
			system("cls");
	}
	
}
	
}


void interfaz::juega_jugador1(Jugador * j1,Jugador *j2){
	string respuesta;
	string respuesta2;
	while(respuesta!="F"){
		cout<<l1.tostring();
		cout<<j1->tostring();
		cout<<"Presiona D para lanzar los dados"<<endl;
		cin>>respuesta;
		if(respuesta == "D"){
			l1.Suerteee(j1,cont1,j2);
			cout<<j1->tostring();
		
		
			while((respuesta!="F")){
				cout<<"Presione C para comprar esta propiedad"<<endl;
				cout<<"Presione V para hipotecar"<<endl; 
				cout<<"Presione P para mostar las propiedades que posee"<<endl;
				cout<<"Presione F para terminar el turno"<<endl;
				cout<<"Presione G para terminar el juego "<<endl;
				cout<<"Presiona E para construir casas o hoteles"<<endl;
				cout<<"Presiona S para deshipotecar una propiedad"<<endl;
				cin>>respuesta;
				
				if(respuesta=="P"){
					l1.propiedades_jugador(j1);
				}
				if(respuesta == "C"){
					l1.comprar_propiedad(j1);
				}
				if (respuesta == "V"){
					l1.hipotecar_propiedad(j1);
				}
				if(respuesta=="A"){
					cout<<l1.ganancias_total(j1);
				}
				if(respuesta =="G"){
					respuesta= "D";
					cout<<"Seguro que quiere terminar el juego s/n"<<endl;
					juega_ambos(j1,j2);
					
					
				}
				if(respuesta=="A"){
					cout<<l1.ganancias_total(j1);
				}
				if(respuesta=="E"){
					l1.construir_hoteles(j1);
				}
				if(respuesta=="S"){
					l1.deshipotecar_propiedades(j1);
				}
				
				
			}
		}
	}
	system ("cls");
}
	

void interfaz::ganador(Jugador *j1,Jugador*j2){
	string respuesta;
	
	if(l1.ganancias_total(j1)>l1.ganancias_total(j2)){
		cout<<"El ganador es "<<j1->tostring();
		cout<<"El perdedor es "<<j2->tostring();
	}
 
	if(l1.ganancias_total(j2)>l1.ganancias_total(j1)){
		cout<<"El ganador es "<<j2->tostring();
		cout<<"El perdedor es "<<j1->tostring();
	}
	   
    if(l1.ganancias_total(j1)==l1.ganancias_total(j2)){
		cout<<"Ha sido un empate"<<endl;
	}
	cout<<"Gracias por jugar!"<<endl;
	Sleep(1000);
	system("cls");
	cout<<"Desea empezar de nuevo?(S/N)"<<endl;
	cin>>respuesta;
	if(respuesta=="S"){
		system("cls");
		menu_de_inicio();
	}
	if(respuesta=="N"){
		cout<<"Gracias por jugar!"<<endl;
	}
	Sleep(1000);
}

void interfaz::juega_ambos(Jugador *j1, Jugador *j2){
	cout<<"Digite cualquier letra para empezar,S para salir"<<endl;
	string respuesta;
	string respuesta2;
	cin>>respuesta2;
	while (respuesta2!="S"){
	
		juega_jugador2(j1,j2);
		juega_jugador1(j2,j1);
		if((j1->get_balance()<=0)&&(l1.cuantas_propiedades_jugador(j1)==0)||(j2->get_balance()<=0&&(l1.cuantas_propiedades_jugador(j2)==0))){
			respuesta2="S";
		}
		
		}
	ganador(j1,j2);
	}
	
	




	
	



	

interfaz::~interfaz() {
	
}

void interfaz::menu_de_inicio(){


	int opc = 1;
	string respuesta;
	string nombre1;
	string nombre2;
	Jugador *j1 = new Jugador("Juan",1500,0,"no",0,1);
	Jugador *j2 = new Jugador("Pedro",1500,0,"no",0,2);
	
			cout<<"Bienvenido al juego de Monopoly"<<endl;
			cout<<"Vamos a iniciar el juego"<<endl;
			
			
			
			do{
		
				cout<<"Porfavor digite el nombre del jugador 1"<<endl;
				cin>>nombre1;
				j1->set_nombre(nombre1);
				cout<<j1->tostring()<<endl;
				cout<<"Porfavor digte el nombre del jugador 2"<<endl;
				cin>>nombre2;
				j2->set_nombre(nombre2);
				cout<<j2->tostring()<<endl;
				j1->set_posicion(0);
				j2->set_posicion(0);
				Sleep(1000);
				system("cls");
				juega_ambos(j1,j2);
			
					
				
				
			} while(4<opc);
				
				
				
}

