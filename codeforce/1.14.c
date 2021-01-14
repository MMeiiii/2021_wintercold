#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){

    return ( *(int*)a-*(int*)b );
}

int x[110];

int main (){

        int N,a,b;

        scanf("%d",&N);

        for(int i=0;i<N;i++){

            int k=0;

            for(int j=0;j<110;j++){
                x[i]=0;
            }

            scanf("%d %d",&a,&b);

            for(int j=0;j<a;j++){

                scanf("%d",&x[j]);

            }



            qsort(x,a,sizeof(int),cmp);

            while(x[k]<=b){
                k++;
            }
            if(k-1==a){
                printf("YES");
            }
            else{
                if(x[0]+x[1]<=b){
                    printf("YES");
                }
                else{
                    printf("NO");
                }
            }


            printf("\n");

        }







return 0;
}
