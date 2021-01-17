#include <stdio.h>

int main (){

    char ch;

    while((ch=getchar())!='\n'){

        if(ch==' '){
            printf("\n");
        }
        else{
            printf("%c",ch);
        }

    }
    return 0;
}
