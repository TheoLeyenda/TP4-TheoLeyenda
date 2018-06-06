#ifndef LISTAS_H
#define LISTAS_H
#include"Nodo.h"

// Lista  simplemente encadenada
class ListaS{
	Nodo* _pFirst;	 // Puntero al primer nodo de la lista (NULL si la lista está vacia)
	Nodo* _pActual; // Puntero al nodo leido (por getFirst o getNext)
	int _cant;		 // Cantidad de nodos en lista
	Nodo* getLast(); // devuelve un puntero al último nodo
public:
	ListaS(){_pFirst=NULL;_pActual=NULL;_cant=0;}
	~ListaS(){ if (_pFirst) delete _pFirst;}
	void clear();						// Elimino todos los nodos de la lista
	bool pushFront(const int &data);	// Inserta un nodo por delante de la lista
	bool pushBack(const int &data);		// Inserta un nodo por detrás de la lista
	bool popFront(int &data);			// Extrae un nodo por delante de la lista
	bool popBack(int &data);			// Extrae un nodo por detrás de la lista
	bool getFirst(int &data);			// Devuelve el puntero al primer nodo
	bool getNext(int &data);			// Devuelve el puntero al siguiente nodo
	int  getCant() { return _cant; };	// Devuelve la cantidad de nodos que tiene la lista
};
#endif

