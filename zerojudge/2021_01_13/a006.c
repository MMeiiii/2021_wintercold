#include <stdio.h>
#include <math.h>

int main (){

	int a,b,c,d,e;
		
	scanf("%d %d %d",&a,&b,&c);
	
	d=b*b-4*a*c;
	e=sqrt(d);
	
	if(d>0){
		printf("Two different roots x1=%d , x2=%d\n",(-b+e)/(2*a),(-b-e)/(2*a));
	}
	else if(d==0){
		printf("Two same roots x=%d\n",(-b+e)/(2*a));
	}
	else{
		printf("No real root\n");
	}
return 0;
}
