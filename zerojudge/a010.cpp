#include <stdio.h>

int num[1000][2]={0};  

int main(){
	
	int a,k=0;
	scanf("%d",&a);
	
	for(int i=2;i<=a;i++){
		int m=0;
		while(a%i==0){
			num[k][0]=i;
			num[k][1]++;
			a=a/i;
			m=1;
		}
		if(m==1){
			k++;
		}
	}
	
	for(int i=0;i<k-1;i++){
		if(num[i][1]!=1){
			printf("%d^%d * ",num[i][0],num[i][1]);
		}
		else{
			printf("%d * ",num[i][0]);
		}
	}
	if(num[k-1][1]!=1){
		printf("%d^%d",num[k-1][0],num[k-1][1]);
	}
	else{
		printf("%d",num[k-1][0]);
	}
	return 0;
}
