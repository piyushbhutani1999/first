/*to find the hcf and lch of two numbers*/


#include<stdio.h>
int main()
{	int non,num[100],temp=0,lcm,i,m,prod=1,hcf;
	printf("Enter the number of numbers");
	scanf("%d",&non);
	for(i=0;i<non;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<non;i++){
		if(temp<num[i])temp=num[i];
	}
	for(m=1;m<100;m++){
		lcm=temp*m;
	/*lcm is a product of maximum number and a number such that the product is divisble by all the entered numbers*/
			for(i=0;i<non;i++){
				printf("%d\n",lcm);
				if(lcm%num[i]!=0)break;
			}
			
			if(i==non)break;
			
	}
	printf("%d",lcm);
 for(i=0;i<non;i++){
	 prod=prod*num[i];
 	}
 hcf=prod/lcm;
 printf("%d",hcf);
}
