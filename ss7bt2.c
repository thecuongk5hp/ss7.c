#include<stdio.h>
int main(){
	int x,a,b,c,y;
	printf("nhap vao so co 3 chu so");
	scanf("%d",&x);
	a = x/100;
	b = x/10%10;
	c = x%10;
	y = a*a*a+b*b*b+c*c*c;
	if(y=x){
		printf("la so armstrong");
	}else{
		printf("ko la so armstrong");
	}
}
