#include <stdio.h>

int main (){

    int N,q,three=0,three_1=0,three_2=0;

    scanf("%d",&N);

    for(int hh=0;hh<N;hh++){
        scanf("%d",&q);

        if(q%3==0){
            three++;
        }
        else if(q%3==1){
            three_1++;
        }
        else if(q%3==2){
            three_2++;
        }

    }

    printf("%d %d %d",three,three_1,three_2);


    return 0;
}
