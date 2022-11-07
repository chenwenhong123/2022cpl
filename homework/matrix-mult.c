//
// Created by 2033834364 on 2022/10/23.
//
#include <stdio.h>

int main(){
    int m=0,n=0,p=0;
    scanf("%d %d %d\n",&m,&n,&p);
    int A[m+2][n+2],B[n+2][p+2];
    int C[m+2][p+2];
    //没办法初始化？
    for (int i = 1; i < m+1; ++i) {
        for (int j = 1; j < n+1; ++j) {
            A[i][j]=0;
        }
    }
    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < p+1; ++j) {
            B[i][j]=0;
        }
    }
    for (int i = 1; i < m+1; ++i) {
        for (int j = 1; j < p+1; ++j) {
            C[i][j]=0;
        }
    }
    for (int i = 1; i < m+1; ++i) {
        for (int j = 1; j < n+1; ++j) {
            scanf("%d",&A[i][j]);
        }
    }
    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < p+1; ++j) {
            scanf("%d",&B[i][j]);
        }
    }
    for (int i = 1; i <m+1 ; ++i) {
        for (int j = 1; j <p+1 ; ++j) {
            for (int k = 1; k <n+1 ; ++k) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for (int i = 1; i <m+1 ; ++i) {
        for (int j = 1; j <p+1 ; ++j) {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}