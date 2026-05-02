// Day 63 - Question 2
// Problem: Flood Fill

#include <stdbool.h>

void dfs(int** img, int m, int n, int r, int c, int old, int newC){
    if(r<0||r>=m||c<0||c>=n||img[r][c]!=old) return;
    img[r][c]=newC;
    dfs(img,m,n,r-1,c,old,newC);
    dfs(img,m,n,r+1,c,old,newC);
    dfs(img,m,n,r,c-1,old,newC);
    dfs(img,m,n,r,c+1,old,newC);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor){
    int old=image[sr][sc];
    if(old==newColor) return image;
    dfs(image,imageSize,*imageColSize,sr,sc,old,newColor);
    return image;
}