#include "object.h"
#include "slinkedlist.h"
#include "stdlib.h"
	SLinkedList::SLinkedList(){
		head=NULL;
	}
    SLinkedList::Node::Node(Object* data, Node* next){
		this->data=data;
		this->next=next;
	}
    SLinkedList::Node::~Node(){
		if(data)
			delete data;
		if(next)
			delete next;
	}
	SLinkedList::~SLinkedList(){
		if(head)
			delete head;
	}
    bool SLinkedList::insert(Object* data, int p){
		if(p>size || p<0)
			return false;
		Node* neo = new Node(data);
		if(!neo)
			return false;
		if(size==0)
			head=neo;
		if(p==0 && size!=0){
			neo->next=head;
			head=neo;
		}else{
			Node* temp=head;
			for(int i=0;i<p-1;i++)
				temp=temp->next;
			neo->next=temp->next;
			temp->next=neo;
		}
		size++;
		return true;
	}
    int SLinkedList:: indexOf(Object* data)const{
		Node* temp= head;
		for(int i=0;i<size;i++){
			if(temp->data->equals(data))
				return i;
			temp=temp->next;
		}
		return -1;

	}
    Object* SLinkedList:: get(unsigned index)const{
		if(index<0 || index>=size)
			return NULL;
		Node* temp=head;
		for(int i=0;i<index;i++)
			temp=temp->next;
		return temp->data; 

	}
    Object* SLinkedList:: remove(unsigned p){
		if(!head || p<0 || p>=size)
			return NULL;
		if(p==0){
			Node* temp=head;
			head=temp->next;
			Object* data2=temp->data;
			temp->data=NULL;
			temp->next=NULL;
			delete temp;
			size--;
			return data2;
		}else{
			Node* temp =head;
			for(int i=0;i<p-1;i++)
				temp=temp->next;
			Node* temp2=temp->next;
			temp->next=temp2->next;
			Object*data2=temp2->data;
			temp2->data=NULL;
			temp2->next=NULL;
			size--;
			delete temp2;
			return data2;

		}
	}
    int  SLinkedList:: prev(int) const {
		return 0;
	}
    int   SLinkedList::next(int) const {
		return 0;
	}
    void  SLinkedList::clear(){
		if(head)
			delete head;
		size=0;
		head=NULL;
	}
    Object* SLinkedList::first()const{
		if(size>0)
			return head->data;
		return NULL;
	}
   	Object* SLinkedList::last()const{
		if(size>0){
			Node* temp= head;
			for(int i=0;i<size;i++)
				temp=temp->next;
			return temp->data;
		}
		return NULL;

	}
    void SLinkedList::print()const{
		if(!head){
			Node* temp=head;
			for(int i=0;i<size;i++){
				temp->data->print();
				temp=temp->next;

			}

		}
	}
    bool SLinkedList:: isFull()const {
		return false;
	}
    int SLinkedList::getCapacity()const{
		return -1;
	}

