#include <stdio.h>

int  main(){
    int n=0;
    scanf("%d",&n);
    getchar();
    char a[1000]="";
    for (int i = 0; i < n; ++i) {
        //为什么此处没有引用符号的时候，a[]数组会被当作int类型？
        scanf("%c",&a[i]);
    }
    //先确定出现最大频率，同时用桶计数法把数进行筛选,并标记最大出现字母
    int b[200]={0};
    for (int i = 0; i < n; ++i) {
        b[a[i]]++;
    }
    int max=b[0];
    for (int i = 0; i < 200; ++i) {
        if (b[i]>=max){
            max=b[i];
        }
    }
    int k;
    for (int i = 90; i >64 ; i--) {
        if (b[i]!=0||b[i+32]!=0){
            k=i;
            break;
        }
    }
    //按照出现最大频率每行输出---------------------------------------------------------------------------
    for (int j = max; j >0 ; j--) {
        for (int i = 65; i < 91; ++i) {
            if(b[i+32]!=0&&b[i+32]>=j){
                printf("=");
            }else if(b[i+32]!=0&&b[i+32]<j){
                printf(" ");
            }
            if(b[i]!=0&&b[i]>=j){
                printf("=");
            }else if(b[i]!=0&&b[i]<j){
                printf(" ");
            }
            if(b[i]!=0||b[i+32]!=0){
                printf(" ");
            }
        }
        printf("\n");
    }
    //倒二行输出
    for (int i = 65; i < 91; ++i) {
        if(i!=k) {
            if (b[i] != 0) {
                if (b[i + 32] != 0) {
                    printf("---");
                } else {
                    printf("--");
                }
            } else {
                if (b[i + 32] != 0) {
                    printf("--");
                }
            }
        }else{
            if (b[i] != 0) {
                if (b[i + 32] != 0) {
                    printf("--");
                } else {
                    printf("-");
                }
            } else {
                if (b[i + 32] != 0) {
                    printf("-");
                }
            }
        }
    }
    printf("\n");
    //成功处理最后一行的字母输出-----------------------------------------------------------------------
    for (int i = 65; i < 91; ++i) {
        if (b[i]!=0){
            if(b[i+32]!=0){
                printf("%c%c ",i+32,i);
            }else{
                printf("%c ",i);
            }
        }  else {
            if(b[i+32]!=0){
                printf("%c ",i+32);
            }
        }
    }
    return 0;
}