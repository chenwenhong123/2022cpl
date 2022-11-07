//
// Created by 2033834364 on 2022/10/30.
//
#include <stdio.h>
#include <math.h>
int Change(int a,int b);
int main(){
    int p=0,q=0,r=0,B=0;
    scanf("%d %d %d",&p,&q,&r);
    //判断所有位数上最大的数
    int max=p/10;
    if(max<p%10){
        max=p%10;
    }
    if(max<q/10){
        max=q/10;
    }
    if(max<q%10){
        max=q%10;
    }
    if(max<r/10){
        max=r/10;
    }
    if(max<r%10){
        max=r%10;
    }
    //打印b值
    for (int i = max+1; i < 41; ++i) {
        if(Change(p,i)* Change(q,i)== Change(r,i)){
            B=i;
            break;
        }
    }
    printf("%d",B);
    return 0;
}

//b进制换成10进制；
int Change(int a,int b){
    int c[50]={0};
    int count=0;
    for (int i = 0; i < 50; ++i) {
        if(a%10!=a){
            c[i] = a%10;
            a/=10;
            count++;
        } else{
            c[i] = a;
            count++;
            break;
        }
    }
    int num=0;
    for (int i = 0; i < count; ++i) {
        if(c[i]>=b)return -100;
    }
    for (int i = 0; i < count; ++i) {
        num+= c[i] * pow(b,i);
    }
    return num;
}