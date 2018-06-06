#ifndef TABLADEPUNTAJES_H
#define TABLADEPUNTAJES_H
#include <iostream>
#include <list>
#include <string>
#include "../Librerias Visua2017/Lista.h"
using namespace std;
namespace tabla
{
	class TablaDePuntajes
	{
	private:
		int dato;
		int puntajeMaximo;
		Lista* listPuntaje;
		list<string> *listNombre;
	public:
		TablaDePuntajes();
		~TablaDePuntajes();
		void insertarPuntaje(string _nombre, int _puntaje);// inserta un puntaje y el nombre del puntaje
		void CambiarNombre(int _posNombre, string _nombre);//modifica el nombre de la pocicion pasada por parametro
		void CambiarPuntaje(int _posPuntaje, int _puntaje); //modifica el puntaje de la pocicion pasada por parametro
		void recorrerListadoPuntaje();//recorre la liste y la muestra(sirve de verificacion de buen funcionamiento)
		void recorrerListaString();//recorre la lista y la muestra(sirve de verificacion de buen funcionamiento)
		Lista* getListaPuntaje();
		list<string>* getListaString();
		int getPuntaje(int _posPuntaje);//le mando por parametro la pocicion del dato y que me lo devuelta
		string getString(string _posPuntaje);// le paso por parametro la pocicion del dato y que me lo debuelva

		void setPuntajeMaximo(int _puntajeMaximo);
		int getPuntajeMaximo();
		void setDato(int _dato);
		int getDato();

	};
}
#endif
