lista:	main.o TDAList.o FSArrayList.o Integer.o Object.o SLinkedList.o DoubleFSCursor.o
	g++ -o lista main.o TDAList.o FSArrayList.o Integer.o Object.o
main.o:	main.cpp tdalist.h fsarraylist.h integer.h object.h
	g++ -c main.cpp -o main.o
FSArrayList.o:	fsarraylist.cpp fsarraylist.h tdalist.h
	g++ -c fsarraylist.cpp -o FSArrayList.o
SLinkedList.o:	slinkedlist.cpp slinkedlist.h tdalist.h
	g++ -c slinkedlist.cpp -o SLinkedList.o
DoubleFSCursor.o:	doublefscursor.cpp doublefscursor.h tdalist.h
	g++ -c doublefscursor.cpp -o DoubleFSCursor.o
TDAList.o:	tdalist.cpp tdalist.h integer.h object.h
	g++ -c tdalist.cpp -o TDAList.o
Integer.o: integer.cpp integer.h object.h
	g++ -c integer.cpp -o Integer.o
Object.o: object.cpp object.h
	g++ -c object.cpp -o Object.o
