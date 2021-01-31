#include <iostream>
#include <string>
using namespace std;

string s;

int main (){

        while(cin >> s){

            int len=s.length(),start_index=0,last_index=len-1,judge=0;

            while(start_index!=last_index && start_index<last_index){
                if(s[start_index]==s[last_index]){
                    start_index++;
                    last_index--;
                }
                else{
                    judge=1;
                    break;
                }
            }
            if(judge==1){
                cout << "no" << endl;
            }
            else{
                cout << "yes" << endl;
            }

        }

    return 0;
}
