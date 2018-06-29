#include <iostream>
#include "Stack.cpp"
using namespace std;

int main() {
	Stack<int> stack = Stack<int>();
	int x = 5, y = 4, z = 9;
	stack.push(&x);
	stack.push(&y);
	stack.push(&z);
	stack.pop();
	cout << stack.toString() << endl;
}