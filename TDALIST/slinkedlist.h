#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H
#include "object.h"
#include "tdalist.h"
#include "stdlib.h"
/*
* Declaraci�n de la Clase LinkedList, que es una implementaci�n del TDAList
* utilizando listas doblemente enlazadas. N�tese la herencia en esta clase.
* N�tese as� mismo, que est�n todas las operaciones virtuales puras de la
* clase TDAList, pues ac� se tendr�n que definir cada una de estas.
* El �nico miembro que tiene esta clase es head, que representa la cabeza de
* la lista, no es necesario tener size, pues lo heredamos de la clase base.
*/
class SLinkedList : public TDAList{
	class Node{
		public:
		 	Node(Object*,Node* =NULL);
			Object* data;
			Node* next;
			~Node();
	};
	Node* head;
  public:
    SLinkedList();
    virtual ~SLinkedList();
    virtual bool insert(Object*, int) ;
    virtual int indexOf(Object*)const ;
    virtual Object* get(unsigned)const ;
    virtual Object* remove(unsigned) ;
    virtual int prev(int) const ;
    virtual int next(int) const ;
    virtual void clear() ;
    virtual Object* first()const ;
    virtual Object* last()const ;
    virtual void print()const ;
    virtual bool isFull()const ;
    virtual int getCapacity()const;
};

#endif
