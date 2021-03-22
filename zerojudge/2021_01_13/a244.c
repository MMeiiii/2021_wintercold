#include <stdio.h>

int main (){

    long long int N,a,b,c;

    scanf("%lld",&N);

    for(int hh=0;hh<N;hh++){

        scanf("%lld %lld %lld",&a,&b,&c);

        if(a==1){
            printf("%ld\n",b+c);
        }
        else if(a==2){
            printf("%ld\n",b-c);
        }
        else if(a==3){
            printf("%ld\n",b*c);
        }
        else if(a==4){
           printf("%ld\n",b/c);
        }
    }
    return 0;
}
