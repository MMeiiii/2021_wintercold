#include <iostream>
#include <stack>

using namespace std;

int main (){

        int n;
        char c;

        cin >> n;

        while(getchar()!='\n')
        continue;

        while(n--){

            stack <char> mystack;

            int sum=0;

            while((c=getchar())!='\n'){

                if(c=='.'){

                    continue;
                }
                else if(c=='p'){
                    mystack.push('p');
                }
                else if(c=='q'){
                    if(!mystack.empty() && mystack.top()=='p'){
                        mystack.pop();
                        sum++;
                    }
                }

            }

            cout << sum << endl;

        }
    return 0;
}
