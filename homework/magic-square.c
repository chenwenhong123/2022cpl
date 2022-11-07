//
// Created by 2033834364 on 2022/10/30.
//
#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int a[10][10]={0};
    a[1][(n+1)/2]=1;
    int row=1,col=(n+1)/2;
    for (int i = 2; i < n*n+1; ++i) {
        int m=0;
        while (m!=1) {
            if ((row - 1 < 1) || (col + 1 > n)) {
                if (row - 1 < 1)row = n+1;
                if (col + 1 > n)col = 0;
                row--;
                col++;
            } else{
                row--;
                col++;
            }
            if (a[row][col]==0){
                a[row][col]=i;
                m=1;
            } else{
                if((row+2>n)||(col-1<1)){
                    if (row +2 >n)row = row+2-n;
                    if (col -1 <1)col = col-1+n;
                    a[row][col]=i;
                    m=1;
                } else {
                    a[row + 2][col - 1] = i;
                    row += 2;
                    col--;
                    m = 1;
                }
            }
        }
    }
    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < n+1; ++j) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}