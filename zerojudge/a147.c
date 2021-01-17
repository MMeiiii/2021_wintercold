#include <stdio.h>

int main (){

    int N;

    while((scanf("%d",&N))!=EOF){
        if(N==0){
            return 0;
        }
        for(int hh=1;hh<N;hh++){

            if(hh%7!=0){
                printf("%d ",hh);
            }


        }
        printf("\n");
    }
    return 0;
}
