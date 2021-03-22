#include <stdio.h>

char datas[1000][1000];

int main (){

    char ch;
    int i=0,j=0;

    while((ch=getchar())!='\n'){
        if(ch==' '){
            i++;
            j=0;
        }
        else{
            datas[i][j]=ch;
            j++;
        }
    }

    for(int hh=1;hh<i;hh++){
        printf("%s %s ",datas[hh],datas[0]);
    }

    printf("%s",datas[i]);

    return 0;
}
