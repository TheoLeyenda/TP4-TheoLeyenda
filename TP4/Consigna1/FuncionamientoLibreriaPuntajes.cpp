#include <iostream>
#include "../TablaPuntajes/Include/TablaDePuntajes.h"
using namespace std;
using namespace tabla;
void main() 
{
	//PARA EL USO COMPLETO DE ESTA LIBRERIA SE DEBEN CARGAR DATOS POR DEFECTOS EN LA LISTA DE PUNTAJE
	TablaDePuntajes *tab = new TablaDePuntajes(5);

	//cargando la lista de puntaje con valores por defecto.
	tab->insertarPuntaje("Mari", 400, 4);// Inserta el puntaje y el nombre en la pocicion que le pasamos en el tercer parametro
										 //ATENCION: el primer elemento siempre sera 0 y el ultimo elemento sera uno menos de la cantidad total.
	tab->insertarPuntaje("Nagi", 100, 1);
	tab->insertarPuntaje("Theo", 1, 0);
	tab->insertarPuntaje("Culo", 50, 2);
	tab->insertarPuntaje("Yugi", 250, 3);

	cout << "Mostrando puntajes" << endl;
	tab->MostrarListaDePuntajes();// Muestra toda La lista Para testear su buen funcionamiento
	cout << endl;

	cout << "Ordenando puntajes" << endl;
	tab->OrdenarPuntajes(); //Ordena los puntajes de mayor a menor
	cout << endl;

	cout << "Lista Ordenada" << endl;
	tab->MostrarListaDePuntajes();
	cout << endl;

	cout << "Cambie Nombre de la lista" << endl ;
	tab->CambiarNombre(3, "Sr. Culo");// Cambia el nombre de la pocicion ingresada en el primer parametro por el nombre del segundo parametro
	tab->MostrarListaDePuntajes();
	cout << endl;

	cout << "Cambio puntaje de la lista" << endl;
	tab->CambiarPuntaje(3, 1000);
	tab->MostrarListaDePuntajes();
	cout << endl;

	cout << "Verificamos cual es el maximo puntaje" << endl;
	tab->VerificarMaxPuntaje();// setea y inicializa el puntaje maximo segun la lista.
	cout << "Mostramos el maximo puntaje" << endl;
	cout <<"Puntaje Maximo:"<< tab->getPuntajeMaximo()<<endl;//devuelve el valor del puntaje maximo

	cin.get();
}