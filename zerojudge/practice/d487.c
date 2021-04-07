#include <stdio.h>

int main (){

    int n;

    while((scanf("%d",&n))!=EOF){

        int sum=1;

        printf("%d! = ",n);

        for(int i=n;i>1;i--){

            sum=sum*i;
            printf("%d * ",i);

    }

    printf("1 = %d\n",sum);



    }




    return 0;
}
