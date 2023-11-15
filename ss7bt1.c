#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=1000;i++){
		if(i%3==0&&i%5!=0){
			printf("%bizz  ");
		}else if(i%3!=0&&i%5==0){
			printf("buzz  ");
		}else if(i%3==0&&i%5==0){
			printf("bizzbuzz  ");
		}else{
			printf("%d  ",i);
		}
	}
}
