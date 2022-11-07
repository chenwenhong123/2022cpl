//
// Created by 2033834364 on 2022/10/30.
//
#include <stdio.h>
#include <math.h>
int Sum (int n,int t);
int main(){
    int n=0,t=0;
    scanf("%d %d",&n,&t);
    int d= Sum(n,t);
    printf("%d",d);
    return 0;
}

int Sum (int n,int t){
    int b=0,c=0;
    for (int i = 0; i < n; ++i) {
        c=0;
        for (int j = 0; j < i+1; ++j) {
            c+=t * pow(10,j);
        }
        b+=c;
    }
    return b;
}