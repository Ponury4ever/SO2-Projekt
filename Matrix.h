#pragma once
#include <iostream>
#include <list>
#include <time.h>
#include <iomanip>
#include <cstdio>
#include <iterator>



using namespace std;

class Matrix
{
	int M, N, **matrix;

public:
	Matrix(int M, int N);
	void createMatrix();
	void printMatrix();
	void shiftElements();
	void insertPawn(int M, int N);
};

