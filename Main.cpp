
//g++ -std=c++11 -pthread Main.cpp Matrix.cpp Queue.cpp -lncurses -o program

#include "Matrix.h"
#include "Queue.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <ncurses.h>
 

int M = 10;
int N = 10;

Matrix matrix(M, N);
Queue queue1(0, M);
Queue queue2(0, N);
std::mutex mutexOne;
std::mutex mutexTwo;

void ncurses() {
	while (true) {
		initscr();
		mutexOne.lock();
		matrix.printMatrix();
		mutexOne.unlock();
		std::this_thread::sleep_for(std::chrono::seconds(1));
		endwin();
	}
}

void producent() {
	while (true) {
		mutexTwo.lock();
		queue1.addElementToQueue(M);
		queue2.addElementToQueue(N);
		mutexTwo.unlock();
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}

void parser() {
	while (true) {
		mutexOne.lock();
		mutexTwo.lock();
		if(queue1.getSize() == 0 || queue2.getSize() == 0){
			mutexOne.unlock();
			mutexTwo.unlock();
			continue;
		}
		matrix.insertPawn(queue1.getElement(), queue2.getElement());
		
		mutexTwo.unlock();
		matrix.shiftElements();
		mutexOne.unlock();
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main()
{
	
	srand(time(NULL));
	std::vector<std::thread> threads;
	
	threads.push_back(std::thread(ncurses));
	threads.push_back(std::thread(producent));
	threads.push_back(std::thread(parser));

	for (auto& thread : threads)
		thread.join();

	return 0;

}




