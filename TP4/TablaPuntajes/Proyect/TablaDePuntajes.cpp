#include "TablaDePuntajes.h"
using namespace tabla;


TablaDePuntajes::TablaDePuntajes()
{
	listPuntaje = new Lista();
	listNombre = new list<string>();
	listNombre->push_front("Mari");
	listNombre->push_back("Neta");
	listNombre->push_back("Rodr");
	listNombre->push_back("Sant");
	listNombre->push_back("joem");
	listNombre->push_back("Tito");
	listNombre->push_back("Theo");
	listNombre->push_back("Jose");
	listNombre->push_back("Pepe");
	listNombre->push_back("Culo");
	listPuntaje->insert(500);
	listPuntaje->insert(450);
	listPuntaje->insert(400);
	listPuntaje->insert(350);
	listPuntaje->insert(200);
	listPuntaje->insert(100);
	listPuntaje->insert(85);
	listPuntaje->insert(70);
	listPuntaje->insert(50);
	listPuntaje->insert(25);
	puntajeMaximo = 500;
	dato = -1;
}


TablaDePuntajes::~TablaDePuntajes()
{
	delete listPuntaje;
	delete listNombre;
}
