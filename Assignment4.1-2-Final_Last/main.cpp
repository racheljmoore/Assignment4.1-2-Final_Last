#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace chrono;

int main(int argc, char** argv)
{
	Stack* hundredStackTest = new Stack();
	Stack* thousandStackTest = new Stack();
	Stack* hundredThousandStackTest = new Stack();

	Queue* hundredQueueTest = new Queue();
	Queue* thousandQueueTest = new Queue();
	Queue* hundredThousandQueueTest = new Queue();

	unsigned long long resultTime = 0;

	auto start = high_resolution_clock::now();

	for (int i = 0; i < 100; i++)
	{
		int randNum = rand() % 242000;

		hundredStackTest->Insert(randNum);
	}

	auto end = high_resolution_clock::now();

	auto elapsed = end - start;

	cout << "100 Stack Insert " << elapsed.count() << " nanoseconds" << endl;

	// start here Rachel
	start = high_resolution_clock::now();

	for (int i = 0; i < 100; i++)
	{
		int randNum = rand() % 242000;

		hundredQueueTest->Insert(randNum);
	}

	end = high_resolution_clock::now();

	elapsed = end - start;

	cout << "100 Queue Insert " << elapsed.count() << " nanoseconds" << endl;

	// right HERE

	return 0;
}