//
// Created by 2033834364 on 2022/10/4.
//
#include<stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    char a[100]=" ";
    gets(a);
    for (int i = 0; i < 100; ++i) {
        if (a[i]>96&&a[i]<113){
            printf("%c",toupper(a[i]));
        }
    }




    return 0;
}