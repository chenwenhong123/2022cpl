//
// Created by 2033834364 on 2022/11/5.
//
#include <stdio.h>
int Num(int a);
int main(){
    int n=0;
    scanf("%d",&n);
    printf("%d", Num(n+1));


    return 0;
}

int Num(int a){
    if (a==0){
        return 0;
    }
    if (a==1)return 1;
    return Num(a-1)+ Num(a-2);

}