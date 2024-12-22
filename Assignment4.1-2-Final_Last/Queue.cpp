#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue()
{
	internalList = new DoublyLinkedList();
}

Queue::~Queue()
{
	delete internalList;
}

void Queue::Insert(int data)
{
	internalList->Insert(data);
}

void Queue::Remove()
{
	int data = internalList->first()->data;

	cout << "Removing " << data << endl;

	internalList->Remove(data);
}

void Queue::Print()
{
	internalList->Print();
}
