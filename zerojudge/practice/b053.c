#include <stdio.h>

//DFS

int row[10][10],col[10][10],square[10][10],sudo[10][10],n,key=0;

void print();
void edge(int,int);
void DFS(int,int);

void print(){

    key=1;

    for(int i=0;i<n*n;i++){
        for(int j=0;j<n*n;j++){
            printf("%d ",sudo[i][j]);
        }
        printf("\n");
    }
}

void edge(int x,int y){

    if(y==n*n){
        if(x+1==n*n){
            print();
            return;
        }
        else(DFS(x+1,0));
    }
    else{
        DFS(x,y);
    }
    return;
}

void DFS(int x,int y){

    if(sudo[x][y]!=0){
        edge(x,y+1);
    }
    else{

        for(int i=0;i<n*n;i++){
            if(row[x][i]==0 && col[y][i]==0 && square[x/n*n+y/n][i]==0){
                row[x][i]=1;
                col[y][i]=1;
                square[x/n*n+y/n][i]=1;
                sudo[x][y]=i+1;
                edge(x,y+1);
                if(key==1){
                    return;
                }
                row[x][i]=0;
                col[y][i]=0;
                square[x/n*n+y/n][i]=0;
                sudo[x][y]=0;
            }
        }

        return;
    }
}

int main (){

    while(scanf("%d",&n)!=EOF){

    key=0;

    for(int i=0;i<n*n;i++){
        for(int j=0;j<n*n;j++){
            row[i][j]=0;
            col[i][j]=0;
            square[i][j]=0;
            sudo[i][j]=0;
        }
    }

    for(int i=0;i<n*n;i++){
        for(int j=0;j<n*n;j++){
            scanf("%d",&sudo[i][j]);
            if(sudo[i][j]!=0){
                row[i][sudo[i][j]-1]=1;
                col[j][sudo[i][j]-1]=1;
                square[i/n*n+j/n][sudo[i][j]-1]=1;
            }
        }
    }

    DFS(0,0);

    if(key==0){
        printf("NO SOLUTION");
    }

    }
    return 0;
}

/*
3
0 6 0 1 0 4 0 5 0
0 0 8 3 0 5 6 0 0
2 0 0 0 0 0 0 0 1
8 0 0 4 0 7 0 0 6
0 0 6 0 0 0 3 0 0
7 0 0 9 0 1 0 0 4
5 0 0 0 0 0 0 0 2
0 0 7 2 0 6 9 0 0
0 4 0 5 0 8 0 7 0
2
0 0 0 0
0 2 3 1
0 3 2 4
2 0 0 2
*/
