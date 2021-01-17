#include <stdio.h>

int main (){

    int N,M,temp;

    scanf("%d %d",&N,&M);

    while(N%M!=0){
        temp=N%M;
        N=M;
        M=temp;
    }

    printf("%d",M);

    return 0;
}
