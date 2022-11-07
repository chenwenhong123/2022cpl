//
// Created by 2033834364 on 2022/10/16.
//
#include <stdio.h>

int  main(){
    int n=0,k=0;
    scanf("%d %d\n",&n,&k);
    int a[50]={0};
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    int l=0,r=n-1;
    int m=a[k-1];
    while(l!=r){

        //1 step
        for (int i = l; i < n; ++i) {
            if (a[i] >= m || l == r) {
                break;
            }
            l++;
        }
        //2 step
        for (int i = r; i >-1; i--) {
            if (a[i] < m || l == r) {
                break;
            }
            r--;
        }
        //3 step
        if (l != r) {
            int mid1 = a[l], mid2 = a[r];
            a[l] = mid2;
            a[r] = mid1;
        }
  //      l = 0, r = n - 1;
    }
    //查找pivot位置
    int z=0,x=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]==m){
              z=i;
         }
    }
    for (int i = z-1; i >-1 ; i--) {
        if(a[i]>m){
            x++;
        }else{
            break;
        }
    }
     int v=a[z-x];
     a[z-x]=a[z],a[z]=v;
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}