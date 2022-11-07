//
// Created by 2033834364 on 2022/10/30.
//
#include <stdio.h>
int Max( int arr[],int len);
int Position(const int arr[],int len);
int main() {
    //数据输入
    int n = 0;
    scanf("%d", &n);
    int a[2001] = {0};
    for (int i = 1; i < n + 1; ++i) {
        scanf("%d", &a[i]);
    }
    //执行部分
    int m = Max(a,n);
    int p = Position(a,n);
    int  pmin = 0;
    if (a[n] > a[n - 1]) {//---------------------1.直接交换后两位
        int swap = a[n];
        a[n] = a[n - 1];
        a[n - 1] = swap;
    } else {//-------------------------------2.后两位不可直接交换
        for (int i = p; i < p + m; ++i) {
            if (a[i] <= a[p - 1]) {
                pmin = i - 1;
                break;
            }
        }
        int swap = a[p - 1];
        a[p - 1] = a[pmin];
        a[pmin] = swap;
        int b[2001] = {0};
        for (int i = 1; i < n + 1; ++i) {
            b[i] = a[i];
        }
        for (int i = n; i > n - m; i--) {
            a[i] = b[2 * n - m - i + 1];
        }
    }
    for (int i = 1; i < n+1; ++i) {
        printf("%d ",a[i]);
    }



    return 0;
}

//查找最大降序数量
int Max( int arr[],int len){
    int c[2001]={0};
    for (int i = 1; i < len+1; ++i) {
        if (arr[i]>arr[i+1]){
            int num=0;
            for (int j = i; j < len+1; ++j) {
                if(j==len){
                    num++;
                    break;
                }
                if(arr[j]>arr[j+1]){
                    num++;
                } else{
                    num++;
                    break;
                }
            }
            c[i]=num;
        }
    }
    int max=c[1];
    for (int i = 1; i < len+1; ++i) {
        if(c[i]>=max){
            max=c[i];
        }
    }
    return max;
}
//查找最大降序起始位置
int Position(const int arr[],int len){
    int c[2001]={0};
    for (int i = 1; i < len+1; ++i) {
        if (arr[i]>arr[i+1]){
            int num=0;
            for (int j = i; j < len; ++j) {
                if(j==len){
                    num++;
                    break;
                }
                if(arr[j]>arr[j+1]){
                    num++;
                } else{
                    num++;
                    break;
                }
            }
            c[i]=num;
        }
    }
    int max=c[1],p=0;
    for (int i = 1; i < len+1; ++i) {
        if(c[i]>=max){
            max=c[i];
        }
    }
    for (int i = 1; i <len+1 ; ++i) {
        if(max==c[i]){
            p=i;
        }
    }
    return p;
}