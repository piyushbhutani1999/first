#include<stdio.h>
int main()
{	int non,num[100],temp=0,lcm,i,m;
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
			for(i=0;i<non;i++){
				printf("%d\n",lcm);
				if(num[i]%lcm!=0)break;
			}
			
			if(i==non)break;
			
	}
	printf("%d",lcm);
}
