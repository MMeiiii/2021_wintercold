#include <iostream>
using namespace std;

int main (){

    int n,sc;

    while(cin >> n){

        int sum=0;

        for(int i=0;i<n ;i++){

            cin >> sc;

            sum+=sc;
        }

        if(sum <= 59*n){
            cout << "yes" <<endl;
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
