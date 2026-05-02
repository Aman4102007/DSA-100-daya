// Day 13 - Question 2
// Problem: Spiral Matrix

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes){
    int rows=matrixSize, cols=matrixColSize[0];
    int total=rows*cols;
    int *res=malloc(total*sizeof(int));
    int top=0,bottom=rows-1,left=0,right=cols-1,idx=0;
    while(idx<total){
        for(int j=left;j<=right && idx<total;j++) res[idx++]=matrix[top][j]; top++;
        for(int i=top;i<=bottom && idx<total;i++) res[idx++]=matrix[i][right]; right--;
        if(top<=bottom){for(int j=right;j>=left && idx<total;j--) res[idx++]=matrix[bottom][j]; bottom--;}
        if(left<=right){for(int i=bottom;i>=top && idx<total;i--) res[idx++]=matrix[i][left]; left++;}
    }
    *returnSize=total;
    *returnColumnSizes=NULL;
    return res;
}