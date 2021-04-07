#include <iostream>
#include <algorithm>
using namespace std;

typedef struct data data;

struct data{

    int x;
    int y;

}person[1000000];


bool sortter(data a,data b){


    if(a.x!=b.x){
        return a.x<b.x;
    }

    return a.y<b.y;


}

int main (){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> person[i].x >> person[i].y;
    }

    sort(person,person+n,sortter);

    for(int i=0;i<n;i++){
        cout << person[i].x << " " << person[i].y << endl;
    }



    return 0;
}
