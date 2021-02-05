#include <iostream>
using namespace std;

int main (){

    int a,b,N;

    while(cin >> a >> b >> N){

        cout << a/b << ".";

        for(int i=0;i<N;i++){

            cout << (a%b*10)/b;

            a=(a%b*10)%b;

        }

        cout << endl;

    }
    return 0;
}
