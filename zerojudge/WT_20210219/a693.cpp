#include <stdio.h>

int sum[100000];

int main (){

    int n,m,sta,fin;

    while((scanf("%d %d",&n,&m))!=EOF){

        int i=1,value;

        while(n--){

            scanf("%d",&value);

            sum[i]=sum[i-1]+value;

            i++;

        }

        while(m--){

            scanf("%d %d",&sta,&fin);

            printf("%d\n",sum[fin]-sum[sta-1]);

        }

    }





    return 0;
}
