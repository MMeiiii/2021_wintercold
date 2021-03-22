#include <stdio.h>

char s[10];

int main (){

    while((scanf("%s",s))!=EOF){

        for(int hh=0;hh<6;hh++){

           if(s[hh+1]-s[hh]<0){
            printf("%d",-(s[hh+1]-s[hh]));
           }
           else{
            printf("%d",s[hh+1]-s[hh]);
           }

        }

        printf("\n");


    }

    return 0;
}
