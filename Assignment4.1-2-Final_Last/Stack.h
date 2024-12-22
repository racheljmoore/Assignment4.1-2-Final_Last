#pragma once

#include "DoublyLinkedList.h"

class Stack
{
private:
	DoublyLinkedList* internalList;
public:
	Stack();
	~Stack();
	void Insert(int item);
	void Remove();
	void Print();
};