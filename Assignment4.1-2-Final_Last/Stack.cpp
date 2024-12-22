#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
	internalList = new DoublyLinkedList();
}

Stack::~Stack()
{
	delete internalList;
}

void Stack::Insert(int item)
{
	internalList->Insert(item);
}

void Stack::Remove()
{
	int data = internalList->last()->data;

	cout << "Removing " << data << endl;

	internalList->Remove(data);
}

void Stack::Print()
{
	internalList->Print();
}
