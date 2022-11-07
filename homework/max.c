//
// Created by 2033834364 on 2022/11/5.
//
#include <stdio.h>
int SearchMax(int p,const long long a[],int len);
int SearchMin(int p,const long long a[],int len);
int main(){
    int n=0;
    scanf("%d",&n);
    long long num[1000]={0};////----------------------------------------------
    for (int i = 1; i < n+1; ++i) {
        scanf("%lld",&num[i]);
    }
    for (int i = 1; i <n+1 ; ++i) {
        printf("%lld %lld\n", SearchMin(i,num,n), SearchMax(i,num,n));
    }


    return 0;
}

int SearchMax(int p,const long long a[],int len){
    int n=-1;
    for (int i = p; i < len+1; ++i) {
        if(a[i]<=a[p]){
            n++;
        } else break;
    }
    return p+n;
}

int SearchMin(int p,const long long a[],int len){
    int n=-1;
    for (int i = p; i > 0; i--) {
        if(a[i]<=a[p]){
            n++;
        } else break;
    }
    return p-n;
}

//递归方法好像不太会