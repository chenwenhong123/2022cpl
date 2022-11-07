//
// Created by 2033834364 on 2022/11/5.
//
#include <stdio.h>
#include <math.h>
//两步得积分公式
double Count(double a,double b,const int num[],int len,int p);
double Settle(double a,double b,const int num[],int len,int p,double c);
int main(){
    int n=0,p=0;
    scanf("%d %d",&n,&p);
    int num[1000]={0};
    for (int i = 0; i < n+1; ++i) {
        scanf("%d ",&num[i]);
    }
    double a=0,b=0;
    scanf("%lf %lf",&a,&b);

    printf("%lf", Settle(a,b,num,n,p,10e-4));

    return 0;
}


double Count(double a,double b,const int num[],int len,int p){
    double n=0,m=0,l=0;
    double mid=(a+b)/2;
    for (int i = len; i>-1 ; i--) {
        n+=num[i]*pow(a,i);
        m+=num[i]*pow(b,i);
        l+=num[i]*pow(mid,i);
    }
    n= pow(n,p);
    m= pow(m,p);
    l= pow(l,p);
    return (4*l+n+m)*(b-a)/6;
}

double Settle(double a,double b,const int num[],int len,int p,double c){
    double mid=(a+b)/2;
    double S= Count(a,b,num,len,p);
    double SL= Count(a,mid,num,len,p);
    double SR= Count(mid,b,num,len,p);
    if(fabs(SL+SR-S)<=c){
        return SL+SR+(SL+SR-S)/15;
    }else{
        return Settle(a,mid, num,len,p,c/2)+ Settle(mid,b,num,len,p,c/2);
    }


}