#pragma once

#include "ListNode.h"

class DoublyLinkedList
{
public:
	DoublyLinkedList();
	void Insert(int valueToInsert);
	void Remove(int valueToRemove);
	void Print();
	void Print(ListNode* nodeToPrint);

	ListNode* first();
	ListNode* last();
private:
	int numberOfItems;
	ListNode* head;
	ListNode* tail;
};