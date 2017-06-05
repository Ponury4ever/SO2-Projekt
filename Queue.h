#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <ctime.h>
#include <iomanip>

using namespace std;

class Queue
{
	list<int> queue;

public:
	
	Queue(int size, int range);
	void printQueue();
	void addElementToQueue(int range);
	int getElement();
	int getSize();
};

