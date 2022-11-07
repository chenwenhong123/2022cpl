#include <stdio.h>
#include <math.h>
 char a[4097][2049];
void Paint(int n, int x, int y, char a[][2049]);

int main(){
    int n=0;
    scanf("%d",&n);
    for (int i = 0; i < 4097; ++i) {
        for (int j = 0; j < 2049; ++j) {
            a[i][j]=' ';
        }
    }
    Paint(n, 1, pow(2,n),a);
    for (int i = 1; i < pow(2,n)+1; ++i) {
        for (int j = 1; j < pow(2,n+1)+1; ++j) {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}


void Paint(int n,int x,int y,char a[][2049]){
    if (n==1){
        a[x][y]='/';
        a[x][y+1]='\\';
        a[x+1][y-1]='/';
        a[x+1][y]='_';
        a[x+1][y+1]='_';
        a[x+1][y+2]='\\';
        return;
    }
        Paint(n-1,x,y,a);
        Paint(n-1,x+ pow(2,n-1),y- pow(2,n-1),a);
        Paint(n-1,x+ pow(2,n-1),y+ pow(2,n-1),a);
}