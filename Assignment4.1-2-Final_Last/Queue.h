#pragma once

#include "DoublyLinkedList.h"

class Queue
{
private:
	DoublyLinkedList* internalList;
public:
	Queue();
	~Queue();
	void Insert(int data);
	void Remove();
	void Print();
};