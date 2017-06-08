#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <time.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Queue
{
	list<int> queue;

public:
	Queue(int size, int range);
	void addElementToQueue(int range);
	int getElement();
	int getSize();
};

