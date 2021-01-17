#include <stdio.h>
#include <string.h>

char s[10000];

int main (){

    fgets(s,10000,stdin);

    s[strlen(s)-1]='\0';

    printf("%s %s",s,s);

    return 0;
}
