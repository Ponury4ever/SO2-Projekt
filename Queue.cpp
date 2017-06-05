#include "Queue.h"


Queue::Queuea(int size, int range)
{
	for (int i = 0; i < size; i++) {
		int rand = rand() % range - 0;
		queue.push_back(rand);
	}
}


void Queue::printQueue()
{
	for (int i = 0; i < queue.size(); i++) {
		cout << setw(3) << queue[i];
	}
	cout << endl;
}

void Queue::addElementToQueue(int range)
{
	int element = rand() % range - 0;
	this->queue.push_back(element);
}

int Queue::getElement() {
	int elemnet = queue.front();
	queue.pop_front();
	return element;
}

int Queue::getSize(){
	return queue.size();
}
