#include <iostream>
using namespace std;

int eng[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};

int main (){

    char s[15];
    int sum=0,n=9,index=1;

    cin >> s;

    sum+=eng[s[0]-'A']%10*9+eng[s[0]-'A']/10;


    while(n--){

        if (n==0){
            sum+=s[index]-'0';
        }
        else{
            sum+=(s[index]-'0')*n;
            index++;
        }

    }

    if(sum%10==0){
        cout << "real" << endl;
    }
    else{
        cout << "fake" << endl;
    }

    return 0;
}
