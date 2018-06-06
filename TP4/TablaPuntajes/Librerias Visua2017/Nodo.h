#ifndef PILA_H
#define PILA_H

#include<iostream>
#define DATAERROR -1
using namespace std;

class Nodo{
	int   _data;
	Nodo* _next;
	Nodo* _prev;
public:
	Nodo();											// Constructor por defecto
	~Nodo();                                      	// Destructor 
	void setData(int data);            				// Seteo el dato del nodo
	void setNext(Nodo* next);             			// Seteo el valor de _next del nodo
	void setPrev(Nodo* prev);             			// Seteo el valor de _prev del nodo
	int getData();               					// Leo el atributo _dato 
	Nodo* getNext();               					// Leo el atributo _next
	Nodo* getPrev();               					// Leo el atributo _prev
};
#endif