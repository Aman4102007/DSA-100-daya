// Day 15 - Question 2
// Problem: Set Matrix Zeroes

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){int m=matrixSize,n=matrixColSize[0];int *row=calloc(m,1),*col=calloc(n,1);for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(matrix[i][j]==0){row[i]=1;col[j]=1;}for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(row[i]||col[j])matrix[i][j]=0;free(row);free(col);}