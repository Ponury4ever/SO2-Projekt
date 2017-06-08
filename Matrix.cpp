#include "Matrix.h"
#include <ncurses.h>


Matrix::Matrix(int M, int N)
{
	this->M = M;
	this->N = N;
	createMatrix();
}

void Matrix::createMatrix()
{
	this->matrix = new int *[M]; 
  	for(int i=0;i<M;i++){
    	this->matrix[i] = new int[N];
	}
}

void Matrix::printMatrix()
{
	clear();
	for (int i = 0; i < this->M; i++) {
		for (int j = 0; j < this->N; j++) {
			printw("%d",matrix[i][j]);
			printw(" ");
		}
		printw("\n");
	}
	refresh();
}



void Matrix::shiftElements()
{
	for(int i = 0; i < this->M; i++){
		for(int k = 0; k< this->N; k++ ){
			
			if(matrix[i][k] == 1){
				matrix[i][k] = 0;
				if(k != 0){
					matrix[i][k-1] = 1;
				}
			}
		}
	}
}

void Matrix::insertPawn(int M, int N) {
	matrix[M][N] = 1;
}
