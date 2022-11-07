//
// Created by 2033834364 on 2022/10/16.
//
#include <stdio.h>

int  main(){
    int n=0;
    scanf("%d",&n);
    char str[100]=" ";
    int a[100]={0},b=0,k=0;
    for (int i = 0; i <100; ++i) {
        a[i]=i;
    }
    scanf("%s",str);
    if(n%2==0) {
        for (int i = 0; i < n * 1.0 / 2; ++i) {
            if (str[i] != '?') {
                printf("%c", str[i]);
            } else if (str[i] == '?' && str[n - 1 - i] != '?') {
                printf("%c", str[n - 1 - i]);
            } else {
                printf("%.2d", a[b]);
                b++;
                k++;
            }
        }
        b=0;
        for (int i = n / 2; i < n; i++) {
            if (str[i] != '?') {
                printf("%c", str[i]);
            } else if (str[i] == '?' && str[n - 1 - i] != '?') {
                printf("%c", str[n - 1 - i]);
            } else {
                printf("%.2d", a[k-1 - b] / 10 + (a[k-1 - b] % 10) * 10);
                b++;
            }
        }
    }else{
        for (int i = 0; i < n * 1.0 / 2; ++i) {
            if (str[i] != '?') {
                printf("%c", str[i]);
            } else if (str[i] == '?' && str[n - 1 - i] != '?') {
                printf("%c", str[n - 1 - i]);
            } else {
                printf("%.2d", a[b]);
                b++;
                k++;
            }
        }
        b=0;
        for (int i = (n / 2)+1; i < n; i++) {
            if (str[i] != '?') {
                printf("%c", str[i]);
            } else if (str[i] == '?' && str[n - 1 - i] != '?') {
                printf("%c", str[n - 1 - i]);
            } else {
                printf("%.2d", a[k-1 - b] / 10 + (a[k-1 - b] % 10) * 10);
                b++;
            }
        }

    }

    return 0;
}