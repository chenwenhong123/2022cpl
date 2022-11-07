//
// Created by 2033834364 on 2022/10/4.
//
#include<stdio.h>
#include <math.h>
int main(){
    int p;
    int q;
    scanf("%d %d",&p,&q);
    double x1=0.0;
    x1= cbrt(-0.5*q+ sqrt(q*q*1.0/4+p*p*p*1.0/27))+
        cbrt(-0.5*q- sqrt(q*q*1.0/4+p*p*p*1.0/27));
    printf("%.3f",x1);
    return 0;
}