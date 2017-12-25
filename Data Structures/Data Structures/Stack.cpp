#include "stdafx.h"
#include <vector>
using namespace std;

template <class T>
class Stack {
	int size, top;
	vector<T> arr;
	public:
		Stack() {
			size = 0;
			top = -1;
		}
		void push(T *data) {
			if (data != NULL) {
				arr.push_back(*data);
				size++;
				top++;
			}
		}
		T pop() {
			T result = arr[top];
			top--;
			size--;
			return result;
		}
		int getSize() {
			return size;
		}
		void print() {
			cout << "Stack:" << endl;
			for (int i = 0; i < size; i++) {
				cout << to_string(arr[i]) << " ";
			}
			cout << "\n" << to_string(size) << " items" << endl;;
		}

};