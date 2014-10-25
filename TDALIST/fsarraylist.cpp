#include "fsarraylist.h"
#include "object.h"
#include "stdlib.h"
    FSArrayList::FSArrayList(int c):capacity(c){	
		data = new Object* [capacity];
		size=capacity;

	}
    FSArrayList:: ~FSArrayList(){
       	for(int i=0; i<size;i++)
		   	delete data[i];
	   	delete[] data;
	}
    bool FSArrayList:: insert(Object* e, int p){
		if(p>size)
			return false;
		if(isFull())
			return false;
		if(p==size)
			data[p]=e;
		else{
			for(int i=size;i>p;i--)
				data[i]=data[i-1];
			data[p]=e;
		}
		//size++;
		return true;
	}
    int FSArrayList::indexOf(Object* e)const{
		int p=-1;
		for(int i=0;i<size;i++){
			if(data[i]->equals(e)){
				p=i;
				break;
			}
		}
		return p;
	}
    Object* FSArrayList::get(unsigned p)const{
		if(p>=size)
			return NULL;
        return data[p];
	}
    Object* FSArrayList:: remove(unsigned p){
		if(p>=size)
			return NULL;
		Object* data2= data[p];
		delete data[p];
		for(int i=p;i<size;i++)
			if(i+1==size)
				data[i]=NULL;
			else
				data[i]=data[i+1];
		//size--;
		return data2;
	}
    void FSArrayList::clear(){
		if(size>0){
			delete data;
			data= new Object*[capacity];
			size=0;
		}
	}
    Object* FSArrayList::first()const{
		if(size>0)
			return data[0];
		return NULL;
	}
    Object* FSArrayList::last()const{
		if(size>0)
			return data[size-1];
		return NULL;
	}
    void FSArrayList::print()const{
		for(int i=0;i<size;i++)
			data[i]->print();	
	}
    bool FSArrayList:: isEmpty()const{
		if(size==0)
			return true;
		return false;
	}
    bool FSArrayList::isFull()const{
		if(size==capacity)
			return true;
		return false;
	}
    int FSArrayList::getCapacity()const{
		return capacity;
	}
	int FSArrayList::prev(int p) const{
			return 0;
	}
    int FSArrayList::next(int p) const{
			return 0;
	}
  

