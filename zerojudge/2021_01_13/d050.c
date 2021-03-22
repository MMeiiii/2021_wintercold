#include <stdio.h>

int main (){

    int N;

    scanf("%d",&N);

    if(N-15<0){
        printf("%d",N-15+24);
    }
    else{
        printf("%d",N-15);
    }

    return 0;
}
