#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
	numberOfItems = 0;
	head = nullptr;
	tail = nullptr;
}

void DoublyLinkedList::Insert(int valueToInsert)
{
	ListNode* newNode = new ListNode();
	newNode->data = valueToInsert;
	newNode->next = head;

	if (head)
	{
		head->previous = newNode;
	}
	else
	{
		tail = newNode;
	}

	head = newNode;

	numberOfItems++;
}

void DoublyLinkedList::Remove(int valueToRemove)
{
	ListNode* current = head;
	ListNode* itemToRemove = nullptr;

	while (current != nullptr)
	{
		if (current->data == valueToRemove)
		{
			itemToRemove = current;
			current = nullptr;
		}
		else
		{
			current = current->next;
		}
	}

	if (itemToRemove == nullptr)
	{
		return;
	}

	// remove
	if (itemToRemove->previous && itemToRemove->next)
	{
		itemToRemove->previous->next = itemToRemove->next;
		itemToRemove->next->previous = itemToRemove->previous;
	}
	else if (itemToRemove->previous)
	{
		itemToRemove->previous->next = nullptr;
		tail = itemToRemove->previous;
	}
	else if (itemToRemove->next)
	{
		itemToRemove->next->previous = nullptr;
		head = itemToRemove->next;
	}
	else
	{
		head = nullptr;
		tail = nullptr;
	}

	delete itemToRemove;
	numberOfItems--;
}

void DoublyLinkedList::Print()
{
	cout << "Printing contents..." << endl;
	Print(head);
}

void DoublyLinkedList::Print(ListNode* nodeToPrint)
{
	if (nodeToPrint == nullptr)
	{
		return;
	}

	cout << nodeToPrint->data << " ";
	Print(nodeToPrint->next);
}

ListNode* DoublyLinkedList::first()
{
	return head;
}

ListNode* DoublyLinkedList::last()
{
	return tail;
}
