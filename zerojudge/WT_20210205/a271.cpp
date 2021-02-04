#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main (){

    int n;

    cin >> n;

    while(n--){

        int value[6],li;

        stringstream s1;

        string line;

        cin >> value[0] >> value[1] >> value[2] >> value[3] >> value[4] >> value[5];

        cin.ignore();

        getline(cin,line);

        s1.clear();

        s1 << line;

        int sum=value[5],poision=0,key=0;

        while(true){

            s1 >> li;

            if(s1.fail()){
                break;
            }

            sum-=poision;

            if(sum<=0){
                key=1;
                break;
            }

            if(li==1){
                sum+=value[0];
            }
            else if(li==2){
                sum+=value[1];
            }
            else if(li==3){
                sum-=value[2];
            }
            else if(li==4){
                sum-=value[3];
                poision+=value[4];
            }

            if(sum<=0){
                key=1;
                break;
            }
        }

        if(key==1){
            cout << "bye~Rabbit" << endl;
        }
        else {
            cout << sum << "g" << endl;
        }

    }
    return 0;
}
