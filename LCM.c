#include<stdio.h>
main(){
	int i,j,k,num1,num2,pr=1;
	scanf("%d %d",&num1,&num2);
	if(num1>num2){
		for(i=2;i<=num1;i++){
			if(num1%i==0){
				num1=num1/i;
			if(num2%i==0){
				num2=num2/i;
			}
				pr=pr*i;
				
			}
			if(num1%i==0 || num2%i==0){
				i--;
			}
			
		}
	}
	printf("%d",pr);
}
