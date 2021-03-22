#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main (){

    int a=9;

    while(a--){

        int num=0;

        string str;

        getline(cin,str);

        int cg=atoi(str.c_str());

        while(cg!=0){
            num=num+cg%10;
            cg/=10;
        }

        printf("%d\n",45-num);


    }


    return 0;
}
