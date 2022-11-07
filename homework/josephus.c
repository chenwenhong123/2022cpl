//
// Created by 2033834364 on 2022/10/16.
//
#include <stdio.h>

int  main(){
   int n=0,k=0;
   scanf("%d%d",&n,&k);
   int a[200]={0};
   int c=0;
   for (int i = 0; i<=n+2; ++i) {
        //判断循环结束-------------------------------------
        int z=0;
        for (int j = 0; j < n; ++j) {
            if(a[j]==0){
                z++;
            }
        }
        if(z==1){
            break;
        }
        //-----------------------------------------------------------
        if(i==n){
            i=0;
        }
        if(a[i]==0){
            c++;
        }
       if (c % k == 0) {
           a[i] = 1;
       }
   }
//输出最后胜者
    for (int i = 0; i < n; ++i) {
        if(a[i]==0){
            printf("%d",i+1);
        }
    }
    return 0;
}