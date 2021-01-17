#include <stdio.h>

int main (){

    int N,a,b,c,d;

    scanf("%d",&N);

    for(int i=0;i<N;i++){

        scanf("%d%d%d%d",&a,&b,&c,&d);

        if((b-a)==(c-b)){

            printf("%d %d %d %d %d\n",a,b,c,d,d+b-a);

        }

        else{

            printf("%d %d %d %d %d\n",a,b,c,d,d*(b/a));

        }

    }
return 0;

}
