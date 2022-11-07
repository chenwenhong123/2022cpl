//
// Created by 2033834364 on 2022/10/23.
//
#include <stdio.h>

int main(){
    //输入数据
    int n=0;
    scanf("%d",&n);
    getchar();
    char a[n+2][n+2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }*/
    int northwest[3][2]={{0,1},{1,0},{1,1}};
    int southwest[3][2]={{0,-1},{1,0},{1,-1}};
    int northeast[3][2]={{0,1},{-1,0},{-1,1}};
    int southeast[3][2]={{-1,0},{-1,-1},{0,-1}};
    int north[5][2]={{1,0},{-1,0},{0,1},{1,1},{-1,1}};
    int south[5][2]={{1,0},{-1,0},{0,-1},{-1,-1},{1,-1}};
    int west[5][2]={{0,-1},{0,1},{1,0},{1,-1},{1,1}};
    int east[5][2]={{-1,0},{-1,-1},{-1,1},{0,-1},{0,1}};
    int middle[8][2]={{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{0,1},{-1,1},{1,1}};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int count=0;
            if(a[i][j]=='*'){
                printf("*");
            }else{
                if(i==0&&j==0){
                    for (int k = 0; k < 3; ++k) {
                        int newI = i + northwest[k][0];
                        int newJ = j + northwest[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(i==0&&j==n-1){
                    for (int k = 0; k < 3; ++k) {
                        int newI = i + southwest[k][0];
                        int newJ = j + southwest[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(i==n-1&&j==0){
                    for (int k = 0; k < 3; ++k) {
                        int newI = i + northeast[k][0];
                        int newJ = j + northeast[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(i==n-1&&j==n-1){
                    for (int k = 0; k < 3; ++k) {
                        int newI = i + southeast[k][0];
                        int newJ = j + southeast[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(i !=0&&i!=n-1 && j ==0){
                    for (int k = 0; k < 5; ++k) {
                        int newI = i + north[k][0];
                        int newJ = j + north[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(i !=0&&i!=n-1 && j ==n-1){
                    for (int k = 0; k < 5; ++k) {
                        int newI = i + south[k][0];
                        int newJ = j + south[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                }else if(j !=0&&j!=n-1 && i ==0){
                    for (int k = 0; k < 5; ++k) {
                        int newI = i + west[k][0];
                        int newJ = j + west[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else if(j !=0&&j!=n-1 && i ==n-1){
                    for (int k = 0; k < 5; ++k) {
                        int newI = i + east[k][0];
                        int newJ = j + east[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                } else{
                    for (int k = 0; k < 8; ++k) {
                        int newI = i + middle[k][0];
                        int newJ = j + middle[k][1];
                        if (a[newI][newJ] == '*') {
                            count++;
                        }
                    }
                    printf("%d",count);
                }


            }
        }
        printf("\n");
    }
    return 0;
}