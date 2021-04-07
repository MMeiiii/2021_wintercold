#include <stdio.h>

int a[110],b[110],c[110],n,v[110],key;

void DFS(int layer){

    if(layer==0){
        for(int i=0;i<2;i++){
            v[0]=a[i];
            layer++;
            DFS(layer);
        if(key==1){
                break;
        }
        layer--;

        }
    }
    else if(layer==1){
        for(int i=0;i<2;i++){
            if(v[0]!=b[i]){
                v[1]=b[i];
                layer++;
                DFS(layer);
            if(key==1){
                break;
            }
            layer--;
            }
        }
    }
    else if(layer==2){
        for(int i=0;i<2;i++){
            if(v[0]!=c[i] && v[1]!=c[i]){
                v[2]=b[i];
                layer++;
                key=1;
            }
            if(key==1){
                break;
            }
            layer--;
        }
    }

    return;


}

int main (){

    int n;

    scanf("%d",&n);

    while(n--){

        key=0;

        scanf("%d %d %d %d %d %d",&a[0],&a[1],&b[0],&b[1],&c[0],&c[1]);

        DFS(0);

        if(key==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
