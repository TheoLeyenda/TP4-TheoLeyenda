#ifndef PILAD_H
#define PILAD_H

#include"Nodo.h"
class PilaD{
private:
	Nodo* _tope;							// Nodo tope de la pila
public:
	PilaD();								// Contructor por defecto 
	~PilaD();								// Destructor
	bool push(int data);					// Apilar
	int pop();								// Desapilar
	bool empty();							// si esta vacía
	bool full();							// si está llena
	void clear();							// elimina todos los nodos
};
#endif