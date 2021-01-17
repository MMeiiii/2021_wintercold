#include <stdio.h>

int main (){

    int N,judge=0;

    scanf("%d",&N);

    if(N==0){
        printf("0");
    }

    while(N!=0){

        if(N%10!=0){
            judge=1;
        }
        if(judge==1){
            printf("%d",N%10);
        }

        N/=10;

    }

    return 0;
}
