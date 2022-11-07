//
// Created by 2033834364 on 2022/10/23.
//
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    getchar();
    char a[1006]=" ";
    char b[1006]=" ";
    char c[1006]=" ";
    gets(a);
    for (int i = 0; i < 1000; ++i) {
        b[i+3]=a[i];
        c[i+3]=a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 3; j < 1006; ++j) {
            b[j] = c[j];
        }
        for (int j = 3; j < 1006; ++j) {
            int num = 0;
            if (b[j] == 'A') {
                if (b[j - 3] == 'B' || b[j - 2] == 'B' || b[j - 1] == 'B' ||
                    b[j + 3] == 'B' || b[j + 2] == 'B' || b[j + 1] == 'B') {
                    c[j] = '.';
                }
                if (b[j - 3] == 'A')num++;
                if (b[j - 2] == 'A')num++;
                if (b[j - 1] == 'A')num++;
                if (b[j + 3] == 'A')num++;
                if (b[j + 2] == 'A')num++;
                if (b[j + 1] == 'A')num++;
                if (num <= 1 || num >= 5)c[j] = '.';
            } else if (b[j] == 'B') {
                if (b[j - 3] == 'A' || b[j - 2] == 'A' || b[j - 1] == 'A' ||
                    b[j + 3] == 'A' || b[j + 2] == 'A' || b[j + 1] == 'A') {
                    c[j] = '.';
                }
                if (b[j - 3] == 'B')num++;
                if (b[j - 2] == 'B')num++;
                if (b[j - 1] == 'B')num++;
                if (b[j + 3] == 'B')num++;
                if (b[j + 2] == 'B')num++;
                if (b[j + 1] == 'B')num++;
                if (num <= 1 || num >= 5)c[j] = '.';
            } else if (b[j] == '.') {
                if (b[j - 3] != 'A' && b[j - 2] != 'A' && b[j - 1] != 'A' &&
                    b[j + 3] != 'A' && b[j + 2] != 'A' && b[j + 1] != 'A') {
                    if (b[j - 3] == 'B')num++;
                    if (b[j - 2] == 'B')num++;
                    if (b[j - 1] == 'B')num++;
                    if (b[j + 3] == 'B')num++;
                    if (b[j + 2] == 'B')num++;
                    if (b[j + 1] == 'B')num++;
                    if (num >= 2 && num <= 4)c[j] = 'B';
                } else if (b[j - 3] != 'B' && b[j - 2] != 'B' && b[j - 1] != 'B' &&
                           b[j + 3] != 'B' && b[j + 2] != 'B' && b[j + 1] != 'B') {
                    if (b[j - 3] == 'A')num++;
                    if (b[j - 2] == 'A')num++;
                    if (b[j - 1] == 'A')num++;
                    if (b[j + 3] == 'A')num++;
                    if (b[j + 2] == 'A')num++;
                    if (b[j + 1] == 'A')num++;
                    if (num >= 2 && num <= 4)c[j] = 'A';
                }
            }
        }
    }

    for (int j = 3; j <1006 ; ++j) {
        if(c[j]!='\000') {
            printf("%c", c[j]);
        }
    }



    return 0;
}