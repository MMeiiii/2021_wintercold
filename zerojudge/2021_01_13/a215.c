#include <stdio.h>

int main (){

    int N,M;

    while((scanf("%d %d",&N,&M))!=EOF){

        int sum=N,i=1;

        while(sum<=M){

            sum+=(++N);
            i++;

        }

        printf("%d\n",i);


    }
    return 0;
}
