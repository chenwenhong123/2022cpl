//
// Created by 2033834364 on 2022/11/5.
//
#include <stdio.h>
int Search_1(int a,int b);
int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("%d", Search_1(a,b));


    return 0;
}



int Search_1(int a,int b){
    if(b==1||b==a){
        return 1;
    }

    return Search_1(a-1,b)+ Search_1(a-1,b-1);
}