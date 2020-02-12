//estructura de lista doble inserta al inicio, borra al final, busca la primera coincidencia y la muestra.
//200915652


#include <iostream>

using namespace::std;

struct nodo{
	char c;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;

void insertarDato();
void borrarUltimo();
void mostrarLista();
void desplegarListaUP();
void buscarNodo();

int main(){
	
	insertarDato();
	insertarDato();
	insertarDato();
	insertarDato();
	insertarDato();
	
	
	
 	cout << "Lista ";
 	mostrarLista();
 	
 	borrarUltimo();
 	
 	cout << "\n Lista \n";
 	mostrarLista();
 	
 	buscarNodo();
 	
 	
  //	cout << "\n Lista ultimo al Primero\n";
 //	desplegarListaUP();
	
	return 0;
}
 

void insertarDato( ){
	nodo* nuevo = new nodo();
	cout << " Ingrese caracter:   ";
	cin >> nuevo->c;
	 
	
	if(primero==NULL){
		primero = nuevo;		
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		
		primero->atras=nuevo;
		nuevo->siguiente = primero;		
		nuevo->atras = NULL;
		primero=nuevo;
	 
 
	}
	cout << "\n Nodo Ingresado\n\n";
}

void borrarUltimo(){
	
	if(primero==NULL){ 		
		cout << "\n La listas se encuentra Vacia\n\n";
 		
	}else if(primero==ultimo){
	 	cout << "\n Nodo borrado\n\n"<< ultimo->c;
		ultimo=NULL;
		primero=NULL;
		
		
	}else{
		cout << "\n Nodo borrado\n\n"<< ultimo->c;
		ultimo=ultimo->atras;
		ultimo->siguiente=NULL;	
	}
		 
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	char nodoBuscado = NULL;
	cout << " Ingre dato Buscar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->c == nodoBuscado){
				cout << "\n Nodo ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas   Vacia\n\n";
	}
}

void mostrarLista(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		
		while(actual!=NULL){
			cout << "\n " << actual->c;
			actual = actual->siguiente;
		}
		
	}else{
		cout << "\n La lista  Vacia\n\n";
	}
}






