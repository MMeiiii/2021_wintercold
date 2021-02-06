#include <iostream>
using namespace std;

int code[4],test[4],code1[4];

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> code[0] >> code[1] >> code[2] >> code[3]){

        int n;

        cin >> n;

        while(n--){

            for(int i=0;i<4;i++){
                code1[i]=code[i];
            }

            cin >> test[0] >> test[1] >> test[2] >> test[3];

            int A=0,B=0;

            for(int i=0;i<4;i++){
                if(code1[i]==test[i]){
                    A++;
                    code1[i]=-1;
                    test[i]=-2;
                }
            }

            for(int i=0;i<4;i++){

                if(test[i]!=-2){
                    for(int j=0;j<4;j++){
                        if(test[i]==code1[j]){
                            B++;
                            code1[j]=-1;
                            break;
                        }
                    }
                }

            }

            cout << A << "A" << B << "B" <<  '\n' ;

        }

    }
    return 0;
}
