//
// Created by 2033834364 on 2022/10/16.
//
#include <stdio.h>

int  main(){
    int n ;
    scanf("%d",&n);
    int a[2001]={0};
    for (int i = 1; i < n+1; ++i) {
        //先不考虑a[0],对所有数进行遍历
        for (int j = i; j < n+1; ++j) {
            if (j % i == 0){
                a[j]= a[j]==0? 1 : 0;
            }
        }
    }
    for (int i = 0; i < n+1; ++i) {
        if (a[i]==1){
            printf("%d ",i);
        }

    }


    return 0;
}