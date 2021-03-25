#include <stdio.h>

//DP

int w[10005],v[10005],c[10005][105];

int max(int a,int b){

    if(a>=b){
        return a;
    }

    return b;
}

int main (){

    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&w[i],&v[i]);
    }

    for(int i=0;i<105;i++){
        c[0][i]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=100;j++){
            if(w[i]<=j){
                c[i][j]=max(c[i-1][j],c[i-1][j-w[i]]+v[i]);
            }
            else{
                c[i][j]=c[i-1][j];
            }
        }
    }

    printf("%d\n",c[n][100]);



    return 0;
}
