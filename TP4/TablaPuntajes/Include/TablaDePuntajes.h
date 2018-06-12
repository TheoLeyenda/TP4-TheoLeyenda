#ifndef TABLADEPUNTAJES_H
#define TABLADEPUNTAJES_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
namespace tabla
{
	class TablaDePuntajes
	{
	private:
		int puntajeMaximo;
		int* listPuntaje;
		string *pString;
		int _ElementosDeLista;
	public:
		TablaDePuntajes(int ElementosDeLista);
		~TablaDePuntajes();
		void insertarPuntaje(string _nombre, int _puntaje, int _posicion);// inserta un puntaje y el nombre del puntaje
		void CambiarNombre(int _posNombre, string _nombre);//modifica el nombre de la pocicion pasada por parametro
		void CambiarPuntaje(int _posPuntaje, int _puntaje); //modifica el puntaje de la pocicion pasada por parametro
		void MostrarListaDePuntajes();
		void VerificarMaxPuntaje();

		int getPuntaje(int _posPuntaje);//le mando por parametro la pocicion del dato y que me lo devuelta
		string getNombre(int _posPuntaje);// le paso por parametro la pocicion del dato y que me lo debuelva
		int getPuntajeMaximo();
		void OrdenarPuntajes();
	};
}
#endif
