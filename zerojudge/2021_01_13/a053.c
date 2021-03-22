#include <stdio.h>

int main (){

    int N;

    scanf("%d",&N);

    if(N<=10){
        printf("%d",6*N);
    }
    else if(10<N && N<=20){
        printf("%d",60+2*(N-10));
    }
    else if(20<N && N<=40){
        printf("%d",80+1*(N-20));
    }
    else{
        printf("100");
    }
    return 0;
}
