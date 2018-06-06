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

	};
}
#endif
