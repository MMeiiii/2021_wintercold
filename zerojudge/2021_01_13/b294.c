#include <stdio.h>

int main (){

    int N,sum=0;

    scanf("%d",&N);

    for(int hh=1;hh<=N;hh++){

        int num;

        scanf("%d",&num);

        sum=sum+num*hh;

    }

    printf("%d",sum);


    return 0;
}
