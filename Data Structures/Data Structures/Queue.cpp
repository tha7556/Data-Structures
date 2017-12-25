#include "stdafx.h"
#include <iostream>  
#include <string>
#include <vector>
using namespace std;

template <class T>
class Queue {
	int size, tail;
	vector<T> arr;
	public:
		Queue() {
			tail = -1;
			size = 0;
		}
		void enqueue(T *data) {
			if (data != NULL) {
				arr.push_back(*data);
				size++;
				tail++;
			}
		}
		T dequeue() {
			T result = *getHead();
			arr.erase(arr.begin());
			size--;
			return result;
		}
		T* getHead() {
			if (size > 0) {
				return &arr[0];
			}
			return NULL;
		}
		T* getTail() {
			if (size > 0) {
				return &arr[tail];
			}
			return NULL;
		}
		int getSize() {
			return size;
		}
		void print() {
			cout << "Queue:" << endl;
			for (int i = 0; i < size; i++) {
				cout << to_string(arr[i]) << " ";
			}
			cout << "\n" << to_string(size) << " items" << endl;;
		}

	
};



