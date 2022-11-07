//
// Created by 2033834364 on 2022/10/9.
//
#include <stdio.h>
#include<math.h>

int main(){
    int n,b=0,k,h=1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        h=(h*((i+1)))%10007;
        b=b+h%10007;
    }
    k=b%10007;


    printf("%d",k);


    return 0;
}
