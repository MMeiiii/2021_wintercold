#include <stdio.h>

int main (){

    int N,M;

    scanf("%d %d", &N,&M);

    if(7<=N && N<17){

        if(N==7 && M <30){
            printf("Off School");
        }
        else{
            printf("At School");
        }

    }
    else {
        printf("Off School");
    }
    return 0;
}
