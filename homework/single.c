//
// Created by 2033834364 on 2022/10/9.
//
#include<stdio.h>

int main(){
    int n,k=0;
    scanf("%d",&n);
    int a[100]={0},b[100]={0};
    for (int i = 0; i < 2*n-1; i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 2*n-1; i++) {
        b[a[i]]++;
    }
    for (int i = 0; i < 10*n; i++) {
        if (b[i]==1){
            k=i;
        }
    }
    printf("%d",k);


    return 0;
}
