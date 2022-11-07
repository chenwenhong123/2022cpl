//
// Created by 2033834364 on 2022/11/5.
//
#include <stdio.h>
int Search( int m,int a[]);
int main(){
    int n=0;
    scanf("%d",&n);
    int a[100]={0};
    for (int i = 1; i < n+1; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < n+1; ++i) {
        printf("%d ", Search(i,a));
    }



    return 0;
}


int Search(int m,int a[]) {
    if(m==a[m])return m;
    return Search(a[m],a);

}