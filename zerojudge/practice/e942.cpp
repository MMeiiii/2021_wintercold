#include <iostream>
#include <algorithm>
using namespace std;

int n,rec[11],num=0;

long long int x[11],ans[11];

void DFS(int);
void print();

void DFS(int num){

    if(num==n){
        print();
        return;
    }

   for(int i=0;i<n;i++){
        if(rec[i]==0){
            ans[num]=x[i];
            rec[i]=1;
            num++;
            DFS(num);
            ans[num]=-1;
            rec[i]=0;
            num--;
        }
   }

    return;

}

void print(){

    for(int i=0;i<n;i++){
        printf("%lld ",ans[i]);
    }

    printf("\n");

}

int main (){

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%lld",&x[i]);
    }

    sort(x,x+n);

    DFS(num);

    return 0;
}

/*
4
10 20 30 40
*/
