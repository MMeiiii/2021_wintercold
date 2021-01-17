#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int s[1005];

int main (){

    int N;

   while((scanf("%d",&N))!=EOF){

        for(int hh=0;hh<N;hh++){
            scanf("%d",&s[hh]);
        }

        sort(s,s+N);

        for(int hh=0;hh<N;hh++){
            printf("%d ",s[hh]);
        }

        printf("\n");

   }
    return 0;
}
