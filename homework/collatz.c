//
// Created by 2033834364 on 2022/10/9.
//
#include <stdio.h>
#include <math.h>

int main(){
    int n,k=0,max;
    int num[10]={0};
    scanf("%d",&n);
    num[0]=n;
    max=n;
    for (int i=0;n != 1;i++ ){
        if (n%2==0){
            n=n/2;
        }else{
            n=3*n+1;
        }
        num[i+1]=n;
        k++;
    }
    for (int i=0;i<=k;i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    printf("%d %d",k,max);


    return 0;
}