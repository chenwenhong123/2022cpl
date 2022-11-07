//
// Created by 2033834364 on 2022/10/23.
//
#include <stdio.h>
int main(){
    int b[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int n=0,m=0,x0=0,y0=0,num=0;
    int ox=0,oy=0,nx=0,ny=0;
    scanf("%d %d %d %d",&n,&m,&x0,&y0);
    getchar();
    ox=x0,oy=y0;
    nx=x0,ny=y0;
    char a[20][52]={0};
    for (int i = 1; i <n+1 ; ++i){
        for (int j = 1; j < m+1; ++j) {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    /*for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; ++j) {
            printf("%c",a[i][j]);
        }
    }*/
    //移动步数
    for (int i = 1; i <n+1 ; ++i) {
        for (int j = 1; j <m+1 ; ++j) {
            if(a[i][j]=='#')num++;
        }
    }
    //移动方式
    printf("%d\n",num);
    printf("%d %d",x0,y0);
    int i=0;
    while (i<n*m){
        for (int k = 0; k < 4; ++k) {
            int newI = ox + b[k][0];
            int newJ = oy + b[k][1];
            if (a[newI][newJ] == '#'&&(newI!=nx||newJ!=ny)) {
                printf("\n%d %d",newI,newJ);
                nx=ox,ny=oy;
                ox=newI,oy=newJ;
                break;
            }
        }
        i++;
    }


    return 0;
}