//
// Created by 2033834364 on 2022/10/30.
//
#include <stdio.h>
#include <stdbool.h>

bool judge(int a);
int inverse(int a);
int main(){
    int n=0;
    scanf("%d",&n);
    int count=0;
    for (int i = 2; i < n+1; ++i) {
        if(judge(i) ){
            if (judge(inverse(i))) {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

bool  judge(int a){
    bool b=true;
    for (int i = 2; i*i <=a ; ++i) {
        if(a%i==0){
            b=false;
            break;
        }
    }
    return b;
}

int inverse(int a){
    int b=0;
    if(a>=100) {
        int s1 = a / 100;
        int mid = a - s1 * 100;
        int s2 = mid / 10;
        int s3 = mid - s2 * 10;
         b = s3 * 100 + s2 * 10 + s1;
    }else if(a>=10 && a<100){
        int s1 = a/10;
        int s2 = a-s1*10;
        b=s2*10+s1;
    } else{
        b=a;
    }
    return b;
}