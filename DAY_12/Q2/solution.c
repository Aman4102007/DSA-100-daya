// Day 12 - Question 2
// Problem: Toeplitz Matrix

#include <stdbool.h>
bool isToeplitzMatrix(int** matrix, int matrixRowSize, int matrixColSize){
    for(int i=0;i<matrixRowSize;i++){
        for(int j=0;j<matrixColSize;j++){
            if(i>0&&j>0&&matrix[i][j]!=matrix[i-1][j-1]) return false; // diagonal mismatch
        }
    }
    return true;
}