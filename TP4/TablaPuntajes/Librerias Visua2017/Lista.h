#ifndef LISTA_H
#define LISTA_H
#include"Nodo.h"
#include <iostream>
using namespace std;

class Lista {
private:
	Nodo* _pPrimero;
	Nodo* _pUltimo;
	Nodo* _pActual;
	int _cant;	
public:
	Lista();
	~Lista();
	bool insert(int data);
	bool extract(int &data);
	bool pushFront(int data);
	bool pushBack(int data);
	bool popFront(int &data);
	bool popBack(int &data);
	void clear();
	int getCant();
};

#endif
