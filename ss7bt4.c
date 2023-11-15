#include<stdio.h>
#include <stdlib.h>
int main(){
	int n,i,sum=0,e;  
	printf("nhap so nguyen n ");
	scanf("%d",n);
 	do {
 	printf("**************chon phep tinh**************\n");
    	printf("1. In ra day so có giá tri nho hon hoac bang n và tinh tong\n");
    	printf("2. in ra va dem cac so chi het cho 3 nho hon n\n");
    	printf("3. kiem tra so nguyen co phai so nguyen to ko\n");
    	printf("4. kiem tra so nguyen co\n");
   	printf("6. gia  phai so hoan hao ko\n");
    	printf("5. tong cac uoc cua nthua cua n\n"); 
	printf("7. in ra so dao nguoc cua n");
    	printf("8. in ra cac so nguyen to tu 1 den n\n"); 
   	printf("9. Thoat\n");
    	int choice;
    	printf("Lua chon cua ban:");
    	scanf("%d",&choice);
    	
    	switch(choice) {
    		case 1:
    			for(i=1;i<=n;i++){
    				printf("%d  ",i);
    				sum += i;
				}
				printf("%d",sum);
			break;
		
			case 2:
				for(i=1;i<n;i++){
					if(i%3==0){
						printf("%d  ",i);
						sum += 1;
					}
				}
			break;
			
			case 3:
				for(i=1;i<n;i++){
					if (i%2!=0&&i%3!=0&&i%5!=0){
						printf("%d la so nguyen to\n",i);
					}
				}
			break;
			
			case 4:
				for(i=1;i<n;i++){
					if(n%i==0){
						sum += i;
					}
					if(sum=n){
						printf("%d la so hoan hao",n);
					}else{
						printf("%d ko la so hoan hao",n);
					}
				}
			break;
			
			case 5:
				for(i=1;i<n;i++){
					if(n%i==0){
						sum += i;
					}
					printf("tong cac uoc cua n = %d",sum);
				}
			break;
			
			case 6:
				for(;n=0;n--){
					sum = sum * n;
					}
					printf("n! = %d",sum);
			break;
			
			case 7:
				//em ko hieu dau bai:((
			break;
				
			case 8:
				for(i=1;i<=n;i++){
					if (i%2!=0&&i%3!=0&&i%5!=0){
						printf("%d",i);
					}
				}
			break;
			
			case 9:
        		exit(e);
      		default:
        	printf("Vui long chon tu 1-9\n");
			}
    } while ("Vui long cho tu 1 - 9\n");
}
