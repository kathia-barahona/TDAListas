#include <iostream>
#include <cstdlib>
#include "fsarraylist.h"
#include "slinkedlist.h"
#include "doublefscursor.h"
#include "integer.h"
#include "time.h"
#include <sstream>
#include <fstream>
using namespace std;

/*
* Programa de Prueba para el TDALista implementado con LinkedList
* -- Listas Doblemente Enlazadas --
* Se prueban las siguientes operaciones:
*  - Inserci�n
*  - Eliminaci�n
*  - Listado
*  - B�squeda
*/


int menu();

int main(int argc, char *argv[])
{
    // En el caso de que quisieramos utilizar otra implementaci�n
    // S�LO se tendr�a que cambiar esta l�nea.
    TDAList* lista = new FSArrayList();
    Integer* intTemp;
    int val, pos;
    bool flag = true;
	srand(time(NULL));
	clock_t inicio=clock();
	double dif;
    while (flag)
    {
        switch(menu())
        {
           case 1:
		   	   	for(int i=0;i<5000;i++){
                   lista->insert(new Integer(rand()%100),rand()%5000);
				   dif=clock()-inicio/CLOCKS_PER_SEC;
				   cout<<dif<<endl;
				  
			   }
               cout << "Valor a Insertar: " ;
               cin >> val;
               cout << "Posicion a Insertar: ";
               cin >> pos;
               if (lista->insert(new Integer(val), pos))
                  cout << "Exito en la Insercion" << endl;
               else
                  cout << "Fracaso en la Insercion" << endl;
               break;
           case 2:
               cout << "Posicion de la que quiere Borrar: ";
               cin >> pos;
               if (lista->remove(pos))
                  cout << "Exito en el Borrado" << endl;
               else
                  cout << "Fracaso en el Borrado" << endl;
               break;
           case 3:
               lista->print();
               break;
           case 4:
               cout << "Valor del Elemento a Buscar: ";
               cin >> val;
               intTemp = new Integer(val);
               pos = lista->indexOf(intTemp);
               delete intTemp;
               cout << "El Elemento esta en la posicion = " << pos << endl;
               break;
           case 9:
               flag = false;
        }
    }
    delete lista;

    return 0;
}
int menu()
{
    cout << "1. Insertar "  << endl;
    cout << "2. Borrar "  << endl;
    cout << "3. Listar " << endl;
    cout << "4. Buscar " << endl;
    cout << "9. Salir " << endl;
    cout << endl << "Opcion? ";
    int opcion;
    cin >> opcion;
    return opcion;
}
