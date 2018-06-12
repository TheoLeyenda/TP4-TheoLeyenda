#include "../Include/TablaDePuntajes.h"
using namespace tabla;
/*
void insertarPuntaje(string _nombre, int _puntaje, int _posicion);// inserta un puntaje y el nombre del puntaje(HECHO)
void CambiarNombre(int _posNombre, string _nombre);//modifica el nombre de la pocicion pasada por parametro(HECHO)
void CambiarPuntaje(int _posPuntaje, int _puntaje); //modifica el puntaje de la pocicion pasada por parametro(HECHO)
void MostrarListaDePuntajes();(HECHO)

int getPuntaje(int _posPuntaje);//le mando por parametro la pocicion del dato y que me lo devuelta(HECHO)
string getNombre(int _posPuntaje);// le paso por parametro la pocicion del dato y que me lo debuelva(HECHO)
void setPuntajeMaximo(int _puntajeMaximo);(HECHO)
int getPuntajeMaximo();(HECHO)
int getDato();
*/

TablaDePuntajes::TablaDePuntajes(int ElementosDeLista)
{
	_ElementosDeLista = ElementosDeLista;
	listPuntaje = new int[_ElementosDeLista];
	pString = new string[_ElementosDeLista];
	puntajeMaximo = 0;
}

void TablaDePuntajes::insertarPuntaje(string _nombre, int _puntaje, int _posicion)
{
	if (_posicion < _ElementosDeLista && _posicion>= 0)
	{
		pString[_posicion] = _nombre;
		listPuntaje[_posicion] = _puntaje;
	}
	else
	{
		cout << "La pocicion ingresada supera los limites del arreglo" << endl;
	}
}
void TablaDePuntajes::CambiarNombre(int _posNombre, string _nombre)
{
	if (_posNombre < _ElementosDeLista && _posNombre >= 0)
	{
		pString[_posNombre] = _nombre;
	}
	else
	{
		cout << "La pocicion ingresada supera los limites del arreglo" << endl;
	}
}
void TablaDePuntajes::VerificarMaxPuntaje()
{
	for (int i = 0; i < _ElementosDeLista; i++)
	{
		if (listPuntaje[i] > puntajeMaximo)
		{
			puntajeMaximo = listPuntaje[i];
		}
	}
}
void TablaDePuntajes::CambiarPuntaje(int _posPuntaje, int _puntaje)
{
	if (_posPuntaje < _ElementosDeLista && _posPuntaje >= 0)
	{
		listPuntaje[_posPuntaje] = _puntaje;
	}
	else
	{
		cout << "La pocicion ingresada supera los limites del arreglo" << endl;
	}
}
void TablaDePuntajes::MostrarListaDePuntajes()
{
	cout << " LISTA DE PUNTAJES" << endl;
	for (int i = 0; i < _ElementosDeLista; i++)
	{
		cout << pString[i]<<" "<<listPuntaje[i]<<endl;
	}
}
int TablaDePuntajes::getPuntaje(int _posPuntaje)
{
	if (_posPuntaje < _ElementosDeLista && _posPuntaje >= 0)
	{
		return listPuntaje[_posPuntaje];
	}
	else
	{
		cout << "La pocicion ingresada supera los limites del arreglo" << endl;
		return 0;
	}
}
string TablaDePuntajes::getNombre(int _posNombre)
{
	if (_posNombre < _ElementosDeLista && _posNombre >= 0)
	{
		return pString[_posNombre];
	}
	else
	{
		cout << "La pocicion ingresada supera los limites del arreglo" << endl;
		return "0";
	}
}
int TablaDePuntajes::getPuntajeMaximo()
{
	return puntajeMaximo;
}
void TablaDePuntajes::OrdenarPuntajes()
{
	int auxiliarI = 0;
	int vecesCorrejidas = 0;
	//int correciones = 100;
	int correciones = _ElementosDeLista + 100;
	
	string auxiliarS = "0";
	bool ordenado = true;

	do {
		for (int i = 0; i < _ElementosDeLista - 1; i++)
		{
			if (listPuntaje[i + 1] > listPuntaje[i])
			{
				ordenado = false;
				auxiliarI = listPuntaje[i];
				listPuntaje[i] = listPuntaje[i + 1];
				listPuntaje[i + 1] = auxiliarI;
				
				auxiliarS = pString[i];
				pString[i] = pString[i + 1];
				pString[i + 1] = auxiliarS;
			}
			else if (listPuntaje[i + 1] < listPuntaje[i])
			{
				vecesCorrejidas = vecesCorrejidas + 1;
				if (vecesCorrejidas == correciones)
				{
					ordenado = true;
				}
			}
		}
	} while (!ordenado);
	puntajeMaximo = listPuntaje[0];
}
TablaDePuntajes::~TablaDePuntajes()
{
	delete listPuntaje;
}

