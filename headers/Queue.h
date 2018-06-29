#pragma once

#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <string>
#include <sstream>
using namespace std;

/**
	A Queue<T> class where T is the data type that it contains
	@author Tyler Atkinson
*/
template <class T>
class Queue {
	private:
		int size, tail;
		vector<T> arr;
	public:
		/**
			Initializes the Queue
		*/
		Queue();
		/**
			Enqueues a value to the back of the queue
			@param data A pointer to the data to enqueue
		*/
		void enqueue(T *data);
		/**
			Dequeues a value from the front of the queue
			@return The value that is dequeued
		*/
		T dequeue();
		/**
			Returns a pointer to the head of the queue
			@return A pointer to the head of the queue
		*/
		T *getHead();
		/**
			Returns A pointer to the tail of the queue
			@return A pointer to the tail of the queue
		*/
		T *getTail();
		/**
			Gets the number of elements inside of the queue
			@return The size of the queue
		*/
		int getSize();
		/**
			Gets a string representation of the queue
		*/
		string toString();
};
#endif