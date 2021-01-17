#include <stdio.h>

int square[102][102];

int main (){

    int N,M;

    while((scanf("%d %d",&N,&M))!=EOF){


    for(int hh=0;hh<N;hh++){

        for(int kk=0;kk<M;kk++){
            scanf("%d",&square[hh][kk]);
        }
    }

    for(int hh=0;hh<M;hh++){

        for(int kk=0;kk<N;kk++){
            printf("%d ",square[kk][hh]);
        }
        printf("\n");
    }


    }
    return 0;
}
