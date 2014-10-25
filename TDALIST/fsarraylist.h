#pragma once
#include "tdalist.h"
#include "integer.h"
class FSArrayList : public TDAList{
	int capacity;
	Object** data;
   public:
    FSArrayList(int=5000);
    virtual ~FSArrayList();
    virtual bool insert(Object*, int);
    virtual int indexOf(Object*)const;
    virtual Object* get(unsigned)const;
    virtual Object* remove(unsigned);
    virtual void clear();
    virtual Object* first()const;
    virtual Object* last()const;
    virtual void print()const;
    virtual bool isEmpty()const;
    virtual bool isFull()const;
    virtual int getCapacity()const;
	virtual int prev(int) const;
    virtual int next(int) const;
   
};

