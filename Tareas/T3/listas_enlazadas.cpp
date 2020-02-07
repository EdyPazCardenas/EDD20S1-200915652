//Tarea 3 lista simple en c++

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
 
struct nodo{
       int carnet; //identificacion
	   string nombre; //nombre    
       struct nodo *sgte;
};
 
typedef struct nodo *Tlista;

 
void insertar(Tlista &lista, int valor, string nombres)
{
    Tlista q;
    q = new(struct nodo);
    q->carnet = valor;
    q->nombre=nombres;
    q->sgte = lista;
    lista  = q;
}


void buscarElemento(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;
 
    while(q!=NULL)
    {
        if(q->carnet==valor)
        {
            cout<<endl<<"Lugar en la lista "<< i <<endl;
            cout<<endl<<"  Nombre    "<< q->nombre <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }
 
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}


void eliminar(Tlista &lista, int valor)
{
    Tlista p, ant;
    p = lista;
 
    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
 
                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" no hay datos";
}
 
  
 
 
 
 
 
