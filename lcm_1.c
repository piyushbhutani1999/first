#include<stdio.h>
int main()
{	int num1,num2,temp1,temp2,prod=1,lcm,i;
	printf("Enter the two numbers");
	scanf("%d%d",&num1,&num2);
	temp1=num1;
	temp2=num2;
	for(i=2;i<=100;i++)
	{
		if(temp1%i==0 && temp2%i==0){
			temp1=temp1/i;
			temp2=temp2/i;
			prod=prod*i;
		}	
	}
	printf("%d\n%d\n%d\n",temp1,temp2,prod);
	lcm=temp1*temp2*prod;
	printf("%d",lcm);
}
