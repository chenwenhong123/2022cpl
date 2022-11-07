//
// Created by 2033834364 on 2022/10/23.
//
#include <stdio.h>
#define row 9
#define col 9
int main(){
    int num=0;
    int board[row][col]={0};
    //录入数组
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d",&board[i][j]);
        }
    }
    /*for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; ++j) {
            printf("%d",board[i][j]);
        }
    }*/
    //不寻常数排除
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(board[i][j]<1||board[i][j]>9){
                num=1;
                break;
            }
        }
    }
    //行列搜索

    for (int i = 0; i < row; ++i) {
        int a[10]={0};
        for (int j = 0; j < col; ++j) {
            a[board[i][j]]++;
        }
        for (int l = 1; l < 10; ++l) {
            if(a[l]!=1){
                num=1;
                break;
            }
        }
    }
    for (int i = 0; i < col; ++i) {
        int a[10]={0};
        for (int j = 0; j < row; ++j) {
            a[board[j][i]]++;
        }
        for (int l = 1; l < 10; ++l) {
            if(a[l]!=1){
                num=1;
                break;
            }

        }
    }
    //小方阵
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int a[10]={0};
           a[board[3*i+1][3*j+1]]++;
            a[board[3*i][3*j+1]]++;
            a[board[3*i+2][3*j+1]]++;
            a[board[3*i][3*j+2]]++;
            a[board[3*i+1][3*j+2]]++;
            a[board[3*i+2][3*j+2]]++;
            a[board[3*i][3*j]]++;
            a[board[3*i+1][3*j]]++;
            a[board[3*i+2][3*j]]++;
            for (int l = 1; l < 10; ++l) {
                if(a[l]!=1){
                    num=1;
                    break;
                }
            }
        }

    }
    //结果输出
    if(num){
        printf("NO");
    }else{
        printf("YES");
    }


    return 0;
}