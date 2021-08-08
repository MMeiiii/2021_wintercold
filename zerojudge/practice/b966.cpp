#include <iostream>
#include <algorithm>
using namespace std;

struct start_end{

    int L,R;

}data[100000];

bool sorrter(start_end a, start_end b){

    if(a.L!=b.L){
        return a.L<b.L;
    }
    return a.R<b.R;
}

int main (){

    int n,len=0,tail;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> data[i].L >> data[i].R;
    }

    sort(data,data+n,sorrter);

    len=data[0].R-data[0].L;
    tail=data[0].R;

    for(int i=1;i<n;i++){
        if(data[i].L>=tail){
            len=len+data[i].R-data[i].L;
            tail=data[i].R;
        }
        else{
            if(data[i].R>tail){
               len=len+data[i].R-tail;
               tail=data[i].R;
            }
        }
    }

    cout << len << endl;


    return 0;
}
