#include <stdio.h>

int main (){

    int N;

    scanf("%d",&N);

    for(int hh=0;hh<N;hh++){

        int a,sum=1;

        scanf("%d",&a);

        if(a==0){
            printf("0\n");
        }

        else{

        while(a!=0){

            sum*=a%10;
            a/=10;

        }

        printf("%d\n",sum);

        }

    }
    return 0;
}
