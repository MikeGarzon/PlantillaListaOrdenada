#include <cstdlib>
#include <iostream>
#include "listaClavesOrdenadas.h"
using namespace std;

/*
	INTEGRANTES:
		MAICOL ANDRES GARZON FONSECA 20172020011
		LUIS FELIPE CORREDOR ESPINOSA 20171020056

*/

int main(int argc, char** argv) {
    
    
    //Insertando datos------------
    //SE PRUEBA SOLO CON CHAR PARA NO HACERLO CONFUSO, PERO FUNCIONA CON CUALQUIER TIPO 
	lista<char> c;
	c.insertar(1001,'Z');
	c.insertar(1002,'X');
	c.insertar(1003,'Y');
	c.insertar(1015,'M');
	
	//Buscando datos--------------
	int dato = 1015; 
	if(c.enLista(dato)){
    cout<<"Buscando <"<<dato<<">..."<<endl;		
	cout<<c.buscar(dato).Dato<<endl;
	}else{
		cout<<"Buscando <"<<dato<<">..."<<endl;	
		cout<<"Dato no encontrado";
	}
	
	cout<<"---------------------------------"<<endl;
	//Imrimiendo datos-------------
	c.imprimir();
	
	cout<<"---------------------------------"<<endl;
	//Borrando datos
	dato = 1003; 
	cout<<"Borrando<"<<dato<<">..."<<endl;		
	c.borrar(dato);

    cout<<"---------------------------------"<<endl;
    //Verificando si se borr
	if(c.enLista(dato)){
	cout<<c.buscar(dato).Dato<<endl;
	}else{
		cout<<"Buscando <"<<dato<<">..."<<endl;	
		cout<<"Dato no encontrado";
	}

		
	return 0;
}
