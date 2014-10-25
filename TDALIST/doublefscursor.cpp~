#include "object.h"
#include "doublefscursor.h"
#include "stdlib.h"
	DoubleFSCursor::DoubleFSCursor(int s){
		size=0;
		disponible=0;
	}
    bool DoubleFSCursor:: insert(Object* e, int p){
		if(p<0 || p>size || isFull()){
			return false;
		}
		CursorRow neo;
		neo.data=e;
		if(size==0){
			cursor[0]=neo;
			head=0;
		}
		for(int i=0;i<size;i++){
				if(cursor[i].data=NULL){
					disponible=i;
					break;
				}					
		}
		if(p==0 && size!=0){
			neo.next=head;
			cursor[head].prev=disponible;
            cursor[disponible]=neo;
			head=size;
		}else{
			int temp=head;
			for(int i=0;i<p-1;i++)
				temp=cursor[temp].next;
			neo.prev=temp;
			neo.next=cursor[temp].next;
			cursor[temp].next=disponible;
			cursor[disponible]=neo;
			
		}
		size++;
		disponible=size;
		return true;

	}

    
     int DoubleFSCursor:: indexOf(Object* e) const{
		int index=-1;
		int temp=head;
		for(int i=0;i<size;i++){
			if(cursor[temp].data->equals(e)){
				index=temp;
				break;
			}
			temp=cursor[temp].next;
		}
		return index;
		
	}
    Object* DoubleFSCursor:: get(unsigned p) const{
		int temp=head;
		if(p<0 || p>=size)
			return NULL;
		for(int i=0;i<p;i++)
			temp=cursor[temp].next;
		return cursor[temp].data;
		
	}
    Object* DoubleFSCursor::remove(unsigned p){
		if(p<0 || p>size)
			return NULL;
		if(p==0){
			Object* data2 = cursor[0].data;
			cursor[0].data=NULL;
			if(size>1){
				cursor[1].prev=-1;
				head=1;
			}
			return data2;
		}else{
			int temp=head;
			for(int i=0;i<p-1;i++)
				temp=cursor[temp].next;
			int temp2=cursor[temp].next;
			cursor[temp].next=cursor[temp2].next;
			Object* data2= cursor[temp2].data;
			cursor[temp2].data=NULL;
			cursor[cursor[temp2].next].prev=cursor[temp2].prev;
			cursor[temp2].next=-1;
			return data2;
		}
		size--;
	}
    void DoubleFSCursor::clear(){
		for(int i=0;i<size;i++)
			cursor[i].data=NULL;
		size=0;
		disponible=0;
	}
    Object* DoubleFSCursor::first()const{
		return cursor[head].data;
	}
    Object* DoubleFSCursor::last()const{
		int temp=head;
		for(int i=0;i<size-1;i++)
			temp=cursor[temp].next;
        return cursor[temp].data;
	}
    void DoubleFSCursor::print()const{
		int temp=head;
		for(int i=0;i<size;i++){
			cursor[temp].data->print();
			temp=cursor[temp].next;
		}
	}
    bool DoubleFSCursor::isEmpty()const{
		if(size==0)
			return true;
		return false;
	}
    bool DoubleFSCursor::isFull()const{
		if(size==5000){
			return true;
		}
	}
    int DoubleFSCursor::getCapacity()const{
		   return 5000;
	}
	int DoubleFSCursor::prev(int p) const{
		return cursor[p].prev;
	}
    int DoubleFSCursor::next(int p) const{
		return cursor[p].next;
	}
   


