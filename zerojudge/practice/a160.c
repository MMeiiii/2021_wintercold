#include <stdio.h>

//DFS

int col[15],R_L[25],L_R[25],n,board[15][15],num,key=0;

void DFS(int lev){

    if(lev==n){
        num++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    printf("Q");
                }
                else{
                    printf("x");
                }
            }
            printf("\n");
        }

        printf("\n");

        return;
    }

    for(int i=0;i<n;i++){
        if(col[i]==0 && R_L[lev+i]==0 && L_R[lev-i+n-1]==0){
            board[lev][i]=1;
            col[i]=1;
            R_L[lev+i]=1;
            L_R[lev-i+n-1]=1;
            DFS(lev+1);
            col[i]=0;
            R_L[lev+i]=0;
            L_R[lev-i+n-1]=0;
            board[lev][i]=0;
        }
    }
    return;
}

int main (){

    while(scanf("%d",&n) && n!=0){

        if(key!=0){
            printf("\n");
        }

        key=1;

        num=0;

        DFS(0);

        col[0]=0;
        R_L[0]=0;
        L_R[0]=0;

        if(num==0){
            printf("0");
        }
        else{
            printf("%d",num);
        }

        printf("\n");

    }
    return 0;
}


/*
Q

1

0

0

xQxx
xxxQ
Qxxx
xxQx

xxQx
Qxxx
xxxQ
xQxx

2

Qxxxx
xxQxx
xxxxQ
xQxxx
xxxQx

Qxxxx
xxxQx
xQxxx
xxxxQ
xxQxx

xQxxx
xxxQx
Qxxxx
xxQxx
xxxxQ

xQxxx
xxxxQ
xxQxx
Qxxxx
xxxQx

xxQxx
Qxxxx
xxxQx
xQxxx
xxxxQ

xxQxx
xxxxQ
xQxxx
xxxQx
Qxxxx

xxxQx
Qxxxx
xxQxx
xxxxQ
xQxxx

xxxQx
xQxxx
xxxxQ
xxQxx
Qxxxx

xxxxQ
xQxxx
xxxQx
Qxxxx
xxQxx

xxxxQ
xxQxx
Qxxxx
xxxQx
xQxxx

10
*/
