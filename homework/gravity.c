//
// Created by 2033834364 on 2022/10/4.
//
#include <stdio.h>
#include<math.h>
int main (){
    int n,b = 0,c = 0,d = 0;
    scanf("%d",&n);
    for (int i = 1,a = 1; i <= n; i++) {
        for (int t = 1; t <= (i-1); t++){
            a = a * (t+1);
/*
 * 1.a的值会因为被赋值而不断改变
 * 2.当i=1时，你的第二个for循环是不会被触发的
 */
            c = a % 10007;
        }
        b = b + c;
    }
    d = b % 10007;
    printf("%d",d);

    return 0;
}
