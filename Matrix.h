#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <ctime.h>
#include <iomanip>
#include <cstdio>
#include <iterator>


using namespace std;

class Matrix
{
	int M, N;
	
	vector < vector <int> > matrix;

public:
	Matrix(int M, int N);
	void createMatrix();
	void printMatrix();
	void shiftElements(int M, int N);
	void insertPawn(int M, int N);
};

