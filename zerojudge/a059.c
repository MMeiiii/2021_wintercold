#include <stdio.h>

int main (){

    int N;

    scanf("%d",&N);

    for(int hh=0;hh<N;hh++){

        int a,b,sum=0;

        scanf("%d %d",&a,&b);

        for(int zz=a;zz<=b;zz++){

            for(int yy=1;yy<=zz;yy++){

                if(zz/yy==yy && zz%yy==0){
                    sum+=zz;
                }

            }

        }

        printf("Case %d: %d\n",hh+1,sum);


    }
    return 0;
}
