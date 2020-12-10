#include "Inicio.h"
#include "PanelAcciones.h"
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "ListaCircular.h"
#include <iostream>
#include <conio.h>
using namespace std;
using namespace ProyectoSimuladorEstructurasDatosBernardoMartinez;
int main() {

	Application::Run(gcnew PanelAcciones);
	
	ListaSimple lsSimple;
	ListaDoble lsDoble;
	ListaCircular lsCircular;

	//LISTA SIMPLE
	//lsSimple.agregarNodoFinal(8);
	//lsSimple.agregarNodoInicio(4);
	//lsSimple.agregarNodoFinal(8);
	//lsSimple.agregarNodoFinal(10);
	//lsSimple.agregarNodoFinal(16);

	//lsSimple.agregarNodoPosicion(40,0);
	//lsSimple.agregarNodoPosicion(78, 1);
	//lsSimple.imprimirLista();

	//lsSimple.eliminarNodoPosicion(1);
	//lsSimple.eliminarNodoValor(10);
	//lsSimple.eliminarNodoPosicion(1);
	//lsSimple.imprimirLista();

	/*Lista Doble
	lsDoble.agregarNodoFinal(10);
	lsDoble.agregarNodoInicio(50);
	lsDoble.imprimirLista();
	lsDoble.agregarNodoFinal(6);
	lsDoble.agregarNodoPosicion(1,1);
	lsDoble.agregarNodoPosicion(1, 1);
	lsDoble.agregarNodoPosicion(1, 89);
	lsDoble.imprimirLista();

	lsDoble.eliminarNodoPosicion(1);
	lsDoble.eliminarNodoValor(10);
	lsDoble.imprimirLista();*/

	/*lsCircular.imprimirLista();
	lsCircular.agregarNodoInicio(60);
	lsCircular.agregarNodoFinal(20);
	lsCircular.agregarNodoInicio(50);
	lsCircular.agregarNodoFinal(20);
	lsCircular.agregarNodoFinal(10);
	lsCircular.agregarNodoFinal(30);
	lsCircular.agregarNodoFinal(40);
	
	cout << "Busqueda: " << lsCircular.buscarNodo(60)->getValor();
	lsCircular.imprimirLista();
	lsCircular.agregarNodoPosicion(1, 1);
	lsCircular.imprimirLista();
	lsCircular.agregarNodoPosicion(3,78);
	lsCircular.imprimirLista();

	lsCircular.eliminarNodoValor(1);
	lsCircular.imprimirLista();
	lsCircular.eliminarNodoPosicion(3);
	lsCircular.imprimirLista();*/

	_getch();
	return 0;
}
