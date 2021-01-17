#include <stdio.h>

int main (){

    int sum=0;

    for(int hh=0;hh<5;hh++){

        int x,y,z,temp;

        scanf("%d %d %d",&x,&y,&z);

        if(x<y){
            temp=x;
            x=y;
            y=temp;
        }
        if(x<z){
            temp=x;
            x=z;
            z=temp;
        }
        if(y+z>x){
            sum++;
        }

    }

    printf("%d",sum);

    return 0;
}
