//
// Created by 2033834364 on 2022/10/4.
//
#include<stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    int s1=a/10000;
        a=a-10000*s1;
    int s2=a/1000;
        a=a-1000*s2;
    int s3=a/100;
        a=a-100*s3;
    int s4=a/10;
        a=a-10*s4;
    int s5=a;
    int b=s1*100+s2*1000+s3*10000+s4+s5*10;
    printf("%.6d",b);


    return 0;
}