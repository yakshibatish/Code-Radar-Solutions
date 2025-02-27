#include<stdio.h>
int main(){
    int N,j;
    scanf("%d",&N);
    for(N=1;N<=4;N++){
        for(j=1;j<=N;j++){
            printf("*");
        }
        printf("\n");
    }
    
}