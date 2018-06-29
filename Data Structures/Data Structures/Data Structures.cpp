#include "stdafx.h"
#include "Queue.cpp"
#include "Stack.cpp"
#include <iostream>  
#include <time.h>
using namespace std;
void testQueue(int n = 9999) {
	srand(time(NULL));
	Queue<int> q = Queue<int>();
	for (int i = 0; i < n; i++) {
		int data = rand() % 100;
		q.enqueue(&data);
	}
	q.print();
	for (int i = 1; i < n; i++) {
		q.dequeue();
	}
	q.print();
}
void testStack(int n = 9999) {
	srand(time(NULL));
	Stack<int> q = Stack<int>();
	for (int i = 0; i < n; i++) {
		int data = rand() % 100;
		q.push(&data);
	}
	q.print();
	for (int i = 1; i < n; i++) {
		q.pop();
	}
	q.print();
}
int main()
{
	testStack();
	while (true) {}
    return 0;
}

