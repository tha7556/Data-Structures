#include "../headers/Stack.h"

template <class T>
Stack<T>::Stack() {
	size = 0;
}
template<class T>
void Stack<T>::push(T *data) {
	if (data != NULL) {
		arr.push_back(*data);
		size++;
	}
}
template<class T>	
T Stack<T>::pop() {
	T result = arr[size-1];
	size--;
	return result;
}
template<class T>
int Stack<T>::getSize() {
	return size;
}
template<class T>
T *Stack<T>::getTop() {
	if(size <= 0)
		return NULL;
	return &arr[size-1];
}
template<class T>
T *Stack<T>::getBottom() {
	if(size <= 0)
		return NULL;
	return &arr[0];
}
template<class T>
string Stack<T>::toString() {
	stringstream out;
	for (int i = size - 1; i > -1; i--) {
		out << arr[i] << " ";
	}
	return out.str();
}
