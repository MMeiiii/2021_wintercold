#include <iostream>
#include <iomanip>
using namespace std;

int square[105][105],n,m;

int main (){

    int t;

    cin >> t;

    while(t--){

        cin >> n >> m;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                square[i][j]=-1;
            }
        }
        int k=1,i=0,j=-1;

        while(k<=n*n){

            while(square[i][j+1]==-1){
                square[i][j+1]=k;
                j++;
                k++;
            }
            while(square[i+1][j]==-1){
                square[i+1][j]=k;
                i++;
                k++;

            }
            while(square[i][j-1]==-1){
                square[i][j-1]=k;
                j--;
                k++;
            }
            while(square[i-1][j]==-1){
                square[i-1][j]=k;
                i--;
                k++;
            }
        }

        if(m==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << setw(5) << square[i][j];
                }
                cout << endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << setw(5) << square[j][i];
                }
                cout << endl;
            }
        }

    }

    return 0;
}
