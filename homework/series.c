//
// Created by 2033834364 on 2022/10/9.
//
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double x,k=0,m;
    scanf("%lf %d",&x,&n);
    for (int i = 0; i < n+1; i++) {
        if (i%2==0){
            k=k+pow(x,2*i+1)/(2*i+1);
        }else{
            k=k-pow(x,2*i+1)/(2*i+1);
        }
    }
    m=4*k;
    printf("%.10f",m);
    return 0;
}