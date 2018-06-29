#include "../headers/Queue.h"

template<class T>
Queue<T>::Queue() {
	size = 0;
}
template<class T>
void Queue<T>::enqueue(T *data) {
	if(data != NULL) {
		arr.push_back(*data);
		size++;
	}
}
template<class T>
T Queue<T>::dequeue() {
	if(size <= 0)
		return NULL;
	T result = *getHead();
	arr.erase(arr.begin());
	size--;
	return result;
}
template<class T>
T *Queue<T>::getHead() {
	if(size > 0)
		return &arr[0];
	return NULL;
}
template<class T>
T *Queue<T>::getTail() {
	if(size > 0)
		return &arr[size-1];
	return NULL;
}
template<class T>
int Queue<T>::getSize() {
	return size;
}
template<class T>
string Queue<T>::toString() {
	stringstream out;
	for(int i = 0; i < size; i++) {
		if(i < size-1)
			out << arr[i] << " ";
		else
			out << arr[i];
	}
	return out.str();
}