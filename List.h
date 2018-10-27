// Day.h
// Jon Caldwell
// COSC 2030
// Oct. 26, 2018

#ifndef List_H
#define List_H

class List
{
private: 
	typedef struct node
	{
		int data;
		node* next;
	}* nodePtr;
	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public: 
	List();
	void addNode(int addData);
	void deleteNode(int delData);
	void printList();
	int sum();
	int max();
	int min();
	int count(); 
};
#endif

