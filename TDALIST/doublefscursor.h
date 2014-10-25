#pragma once
#include "tdalist.h"

class DoubleFSCursor : public TDAList{
	struct CursorRow{
			Object* data;
			int next;
			int prev;
	};
	CursorRow cursor[5000];
	int head;
	int disponible;
  public:
    DoubleFSCursor(int);
    virtual ~DoubleFSCursor();
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
	virtual bool isEmpty()const;
    virtual int getCapacity()const;
};

