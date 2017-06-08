#include "Queue.h"


Queue::Queue(int size, int range)
{
	for (int i = 0; i < size; i++) {
		int randome = rand() % range - 0;
		queue.push_back(randome);
	}
}


void Queue::addElementToQueue(int range)
{
	int element = rand() % range - 0;
	this->queue.push_back(element);
}

int Queue::getElement() {
	int element = queue.front();
	queue.pop_front();
	return element;
}

int Queue::getSize(){
	return queue.size();
}
