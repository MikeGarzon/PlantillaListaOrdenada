#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H
#include <iostream>

using namespace std; 

template <class T>
struct nodo {
    int clave;
    T info;
    nodo <T> *sig;
};

template <class T>
class listaord{nodo<T> *cabeza, *centinel;
               int tam;
               int infinito = 999999;

    public: listaord(){cabeza = new nodo <T>;
                       centinel = new nodo <T>;

                       cabeza->sig = centinel;
                       centinel-> sig = centinel;
                       centinel->clave = infinito;

                       tam = 0;}

        bool lista_vacia();
        void insertar(int cla, T inf);
        void borrar(int cla);
        void buscar (int cla);
        bool pertenece (int cla);    
        void recorrer();
        void asignarInfo(int cla, T inf);
        int siguiente(int cla);
        int anterior(int cla);   
};


template <class T>
bool listaord<T>::lista_vacia()
{if(cabeza->sig ==centinel)
    return false;
 else
    //cout<<"Tamaño de la lista: "<<tam<<endl;
    return true;
}

template <class T> 
void listaord <T>::insertar(int cla , T inf){
    nodo <T> *ant, *pos, *nuevo;

    nuevo = new nodo <T>;
    nuevo->clave = cla;
    nuevo->info = inf;

    ant = cabeza;
    pos = cabeza->sig;

    while (nuevo->clave > pos->clave){
        ant=pos;
        pos= ant->sig;
    }

    ant->sig= nuevo;
    nuevo->sig= pos;

    tam++;
}

template <class T>
void listaord<T>::buscar(int cla)
{   nodo<T> *cent = cabeza;
    nodo <T> *salida = NULL;

    while (cla != cent->clave && cent->sig!=centinel)
    {
        cent = cent->sig;
    }

    salida = cent;

    if (cla==cent->clave) cout<<"La informacion en <"<<cla << "> es: "<<salida->info<<endl;
    else if (cent->sig == centinel) cout<<"La clave <"<<cla << "> no existe."<<endl;
    else cout<<"La informacion en <"<<cla << "> es: "<<salida->info<<endl;
}


template <class T>
void listaord<T>::borrar(int cla){ 
    nodo <T> *ant, *pos;

    ant = cabeza;
    pos = cabeza->sig;

    while (cla !=pos->clave && pos->sig != centinel) 
    {
        ant=pos;
        pos= ant->sig;
    }

    if (cla==pos->clave) 
    {
        ant->sig= pos->sig;
        tam--;
        delete pos;
    }else cout<<"No se puede eliminar, el codigo no existe."<<endl;   

}

template<class T>
bool listaord<T>::pertenece(int cla)
{
    nodo<T> *cent = cabeza;
    while (cla != cent->clave && cent->sig!=centinel){cent = cent->sig;}

    if (cla==cent->clave) return true;
    else if (cent->sig == centinel) return false;
    else return true;
}

template <class T>
void listaord<T>::recorrer()
{   
    nodo <T> *cent = cabeza->sig;
	    while(cent != centinel)
    		{
			cout<<"Clave: <"<<cent->clave<<"> ";
    		cout<<"Informacion: "<<cent->info<<endl;
			cent = cent->sig;
			}
}

template <class T>
int  listaord<T>::siguiente(int cla)
{   nodo<T> *cent = cabeza;
    nodo<T> *pos; 
    
    while (cla != cent->clave && cent->sig!=centinel)
    {
        cent = cent->sig;
    }

    pos = cent->sig;

    if (pos->clave==infinito)return -1;
    else return pos->clave;
}

template <class T>
int  listaord<T>::anterior(int cla)
{   nodo <T> *ant, *pos;

    ant = cabeza;
    pos = cabeza->sig;

    while (cla !=pos->clave && pos->sig != centinel) 
    {
        ant = pos;
        pos = pos->sig;
    }

    if (ant->clave==0) return -1;
    else if (cla==pos->clave) return ant->clave; 
    else return -1;   

}

template <class T>
void listaord<T>::asignarInfo(int cla , T inf )
{   
    nodo<T> *cent = cabeza;

    while (cla != cent->clave && cent->sig!=centinel){cent = cent->sig;}

    if (cla == cent->clave) cent->info = inf;
}


#endif
