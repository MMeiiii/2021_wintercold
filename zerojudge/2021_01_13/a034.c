#include <stdio.h>

int s[35];

int main (){

    int N;

    while((scanf("%d",&N))!=EOF){

    int k=0;

    for(int hh=0;s[hh]!=0;hh++){
        s[hh]=0;
    }

    if(N==0){
        printf("0");
    }

    while(N!=0){

        s[k]=N%2;
        N/=2;
        k++;

    }

    for(int hh=k-1;hh>=0;hh--){
        printf("%d",s[hh]);
    }
    printf("\n");

    }

    return 0;
}
