#pragma once

#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

/**
	A Stack<T> class where T is the data type that it contains
	@author Tyler Atkinson
*/
template<class T>
class Stack {
	private:
		int size, top;
		vector<T> arr;
	public:
		/**
			Initializes the Stack
		*/
		Stack();
		/**
			Pushes a value onto the top of the Stack
			@param data A pointer to the data being put onto the Stack
		*/
		void push(T *data);
		/**
			Removes and returns the top value of the Stack
			@return The top value of the Stack
		*/
		T pop();
		/**
			Gets a pointer to the top of the Stack
			@return A pointer to the top of the Stack
		*/
		T *getTop();
		/**
			Gets a pointer to the bottom of the Stack
			@return A pointer to the bottom of the Stack
		*/
		T *getBottom();
		/**
			Gets the number of elements inside of the Stack
			@return The number of elements inside of the Stack
		*/
		int getSize();
		/**
			Gets a string representation of the Stack
			@return A string representation of the Stack
		*/
		string toString();
};

#endif