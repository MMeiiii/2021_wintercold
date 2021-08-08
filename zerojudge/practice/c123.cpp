#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main (){

    int a;

    while(cin >> a && a!=0){

        int b;

        while(cin >> b && b!=0){

            vector<int> car;
            stack<int> stk;
            int point=1,key=0;
            car.push_back(b);

            for(int i=0;i<a-1;i++){
                cin >> b;
                car.push_back(b);
            }

            for(int i=0;i<a;i++){
                if(!stk.empty() && stk.top()==car[i]){
                    stk.pop();
                }
                else if(car[i]>=point){
                    for(int j=point;j<car[i];j++){
                        stk.push(j);
                    }
                    point=car[i]+1;
                }
                else{
                    key=1;
                    break;
                }
            }

            if(key==0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }

        }
        cout << endl;

    }


    return 0;
}
