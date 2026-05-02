// Day 11 - Question 2
// Problem: Transpose Matrix

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes){
    int n=matrixSize,m=matrixColSize[0];
    *returnSize=n;*returnColumnSizes=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)(*returnColumnSizes)[i]=m;
    int** res=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        res[i]=malloc(m*sizeof(int));
        for(int j=0;j<m;j++)res[i][j]=matrix[j][i];
    }
    return res;
}