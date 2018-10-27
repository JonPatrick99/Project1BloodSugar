// List.cpp
// Jon Caldwell
// COSC 2030
// Oct. 26, 2018

#include <iostream>
#include "List.h"

using std::cout;
using std::endl;

List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNode(int addData)
{
	nodePtr n = new node;
	n->next = NULL; 
	n->data = addData;

	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}
void List::deleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while (curr != NULL && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL)
	{
		cout << delData << " was not in the list \n";
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";
	}
}
void List::printList()
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next; 
	}
}
int List::sum()
{
	int sum = 0; 
	curr = head;
	if (curr != NULL)
	{
		sum += curr->data; 
		curr = curr->next; 
	}
	return sum; 
}

int List::max()
{
	int max = INT_MIN;
	while (head != NULL)
	{
		if (max < head->data && max < -1)
		{
			max = head->data;
			head = head->next;
		}
		return max;
	}
}
int List::min()
{
	int min = INT_MAX;
	while (head != NULL)
	{
		if (min > head->data && min < -1)
		{
			min = head->data;
			head = head->next;
		}
		return min;
	}
}
int List::count()
{
	int count = 0;
	curr = head;
	while (curr != NULL)
	{
		if (curr->data > 0)
		{
			count++;
			curr = curr->next; 
		}
		else if (curr->data < 0)
		{
			deleteNode(curr->data);
		}
	}
	return count;
}
