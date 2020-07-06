#include <iostream>
#include "listaOrdenadaCentinelas.h"

using namespace std; 

int main(){
    listaord<char> c;

    //Verificando si la lista esta vacia -------------------------------
    cout<<"¿Lista vacia?: ";
    cout<<c.lista_vacia()<<endl;

    //Insertando datos--------------------------------------------------
	c.insertar(1,'A');
    c.insertar(5,'E');
    c.insertar(3,'C');
    c.insertar(4,'D');
    c.insertar(7,'G');
    c.insertar(2,'B');
    c.insertar(6,'F');

    //Verificando si la lista esta vacia--------------------------------
    cout<<endl<<"¿Lista vacia?: ";
	cout<<c.lista_vacia()<<endl;
    
    //Buscando Datos----------------------------------------------------
    cout<<endl<<"Buscando Datos..."<<endl;

    int clave = 3;
    c.buscar(clave);

    clave = 1;
    c.buscar(clave);

    clave = 7;
    c.buscar(clave);

    clave = 15;
    c.buscar(clave);

    //Eliminando Datos--------------------------------------------------
    cout<<endl<<"Eliminando Datos..."<<endl;

    clave =7;
    c.borrar(clave);
    
    clave =1;
    c.borrar(clave);

    clave =5;
    c.borrar(clave);

    clave =18;
    c.borrar(clave);

    //Pertenece--------------------------------------------------------
    cout<<endl<<"La clave <"<<clave<<"> ¿Pertenece a la lista? :";
    cout<<c.pertenece(clave)<<endl;

    clave = 6;
    cout<<"La clave <"<<clave<<"> ¿Pertenece a la lista? :";
    cout<<c.pertenece(clave)<<endl;

    //Imprimiendo lista-----------------------------------------------
    cout<<endl<<"Imprimiendo lista"<<endl;
    c.recorrer();

    //Cambiando informacion ------------------------------------------
    c.asignarInfo(2,'X');
    c.asignarInfo(6,'Y');

    cout<<endl<<"Despues de cambiar la informacion"<<endl;
    c.buscar(2);
    c.buscar(6);

    cout<<endl<<"Acceso a nodos: (-1) significa no enlace"<<endl;

    clave = 2;
    cout<<"Clave siguiente de "<<clave<<"-> "<<c.siguiente(clave)<<endl;

    clave = 6;
    cout<<"Clave anterior de "<<clave<<"-> "<<c.anterior(clave)<<endl;

    clave = 6;
    cout<<"Clave siguiente de "<<clave<<"-> "<<c.siguiente(clave)<<endl;

    return 0;
}
