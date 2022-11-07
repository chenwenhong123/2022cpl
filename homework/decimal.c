//
// Created by 2033834364 on 2022/10/16.
//
#include <stdio.h>
#include <math.h>
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15
int  main(){
    int len=0,N=0;
    scanf("%d %d\n",&len,&N);
    char s[len];
    scanf("%s",s);
    //为什么a的赋值和声明要分开？
    /*int a;
    a = s[1] - 48;
    printf("%d",a);
    */
    int a[30]={0};
    for (int i = 0; i < len; ++i) {
            a[i] = s[i] - 48;
            if(a[i]>15){
                a[i]-=7;
        }
    }
    int indulge=0;
    for (int i = 0; i < len; ++i) {
        if(a[i]>=N){
            indulge=1;
        }
    }
    int b=0;
    for (int i = 0; i < len; ++i) {
        b=b+ a[i]*pow(N,len-1-i);
    }
    if(indulge){
        printf("Error");
    }else{
        printf("%d",b);
    }

    return 0;
}