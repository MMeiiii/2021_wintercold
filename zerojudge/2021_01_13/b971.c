#include <stdio.h>

int main (){

    int a,a_n,d;

    scanf("%d %d %d",&a,&a_n,&d);

    while(a!=a_n){

        printf("%d ",a);

        a+=d;

    }

    printf("%d",a_n);
    return 0;

}
