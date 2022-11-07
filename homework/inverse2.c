//
// Created by 2033834364 on 2022/10/9.
//
#include <stdio.h>

int main(){
    int n;
    int k;
    char a[50];
    scanf("%d",&n);
    getchar();
    for (int i = 0; i < n; i++) {
        scanf("%c",&a[i]);
    }
    scanf("\n%d",&k);
    for (int i = 0; i < k; i++) {
        printf("%c",a[k-i-1]);
    }
    for (int i = k; i <n ; i++) {
        printf("%c",a[n-i+k-1]);
    }
    return 0;
}