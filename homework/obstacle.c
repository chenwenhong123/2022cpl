//
// Created by 2033834364 on 2022/10/9.
//
#include <stdio.h>
#include <math.h>
int main() {
    int x1, x2, x3, y1, y2, y3;
    char foot[50];
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    int k = abs(x1 - x2) + abs(y1 - y2);
    if (x1 < x2 && y1 < y2) {
        if (x3 != x2 && y3 != y1) {
            for (int i = 0; i < x2 - x1; ++i) {
                foot[i] = 'R';
            }
            for (int i = x2 - x1; i < y2 - y1 + x2 - x1; ++i) {
                foot[i] = 'U';
            }
        } else {
            for (int i = 0; i < y2 - y1; ++i) {
                foot[i] = 'U';
            }
            for (int i = y2 - y1; i < y2 - y1 + x2 - x1; ++i) {
                foot[i] = 'R';
            }

        }
    }
    if (x1 > x2 && y1 > y2) {
        if (x3 != x2 && y3 != y1) {
            for (int i = 0; i < x1 - x2; ++i) {
                foot[i] = 'L';
            }
            for (int i = x1 - x2; i < y1 - y2 + x1 - x2; ++i) {
                foot[i] = 'D';
            }
        } else {
            for (int i = 0; i < y1 - y2; ++i) {
                foot[i] = 'D';
            }
            for (int i = y1 - y2; i < y1 - y2 + x1 - x2; ++i) {
                foot[i] = 'L';
            }

        }
    }
    if (x1 > x2 && y1 < y2) {
        if (x3 != x2 && y3 != y1) {
            for (int i = 0; i < x1 - x2; ++i) {
                foot[i] = 'L';
            }
            for (int i = x1 - x2; i < y2 - y1 + x1 - x2; ++i) {
                foot[i] = 'U';
            }
        } else {
            for (int i = 0; i < y2 - y1; ++i) {
                foot[i] = 'U';
            }
            for (int i = y2 - y1; i < y2 - y1 + x1 - x2; ++i) {
                foot[i] = 'L';
            }

        }
    }
    if (x1 < x2 && y1 > y2) {
            if (x3 != x2 && y3 != y1) {
                for (int i = 0; i < x2 - x1; ++i) {
                    foot[i] = 'R';
                }
                for (int i = x2 - x1; i < y1 - y2 + x2 - x1; ++i) {
                    foot[i] = 'D';
                }
            } else {
                for (int i = 0; i < y1 - y2; ++i) {
                    foot[i] = 'D';
                }
                for (int i = y1 - y2; i < y1 - y2 + x2 - x1; ++i) {
                    foot[i] = 'R';
                }

            }
        }
    if (x1==x2&&x3!=x1){
        if(y1>y2){
            for (int i = 0; i < k; ++i) {
                foot[i] = 'D';
            }
        }else{
            for (int i = 0; i < k; ++i) {
                foot[i] = 'U';
            }
        }
    }
    if (y1==y2&&y3!=y1){
        if(x1>x2){
            for (int i = 0; i < k; ++i) {
                foot[i] = 'L';
            }
        }else{
            for (int i = 0; i < k; ++i) {
                foot[i] = 'R';
            }
        }
    }
    if (x1==x2&&x1==x3){
        if(y1>y2){
            if(y3>y1||y3<y2) {
                for (int i = 0; i < k; ++i) {
                    foot[i] = 'D';
                }
            }else{
                k=k+2;
                foot[0]='R';
                foot[y1-y2+1]='L';
                for (int i = 1; i <y1-y2+1 ; ++i) {
                    foot[i]='D';
                }
            }
        }else{
            if(y3<y1||y3>y2) {
                for (int i = 0; i < k; ++i) {
                    foot[i] = 'U';
                }
            }else{
                k=k+2;
                foot[0]='R';
                foot[y2-y1+1]='L';
                for (int i = 1; i <y2-y1+1 ; ++i) {
                    foot[i]='U';
                }
            }
        }
    }
    if (y1==y2&&y1==y3){
        if(x1>x2){
            if(x3>x1||x3<x2) {
                for (int i = 0; i < k; ++i) {
                    foot[i] = 'L';
                }
            }else{
                k=k+2;
                foot[0]='U';
                foot[x1-x2+1]='D';
                for (int i = 1; i <x1-x2+1 ; ++i) {
                    foot[i]='L';
                }
            }
        }else{
            if(x3<x1||x3>x2) {
                for (int i = 0; i < k; ++i) {
                    foot[i] = 'R';
                }
            }else{
                k=k+2;
                foot[0]='U';
                foot[x2-x1+1]='D';
                for (int i = 1; i <x2-x1+1 ; ++i) {
                    foot[i]='R';
                }
            }
        }
    }
    printf("%d\n",k);
    for (int i = 0; i < k; ++i) {
        printf("%c",foot[i]);
    }
    return 0;
}