#include<stdio.h>
#include<math.h>
int main()
{	int store,num1,num2,temp,m,check=0,tst,i;
	long long int lcm,hcf;
	scanf("%d",&tst);
	while(check<tst){
		scanf("%d%d",&num1,&num2);
		if(num1<num2){
			temp=num2;
			num2=num1;
			num1=temp;
		}
		hcf=gcd(num1,num2);
		lcm=num1/hcf;
		lcm=lcm*num2;
		printf("%lld %lld\n",hcf,lcm);
		check++;
		
		
	}
}
int gcd(int num1,int num2){
	int rem;
	rem=num1%num2;
	while(rem!=0){
		num1=num2;
		num2=rem;
		rem=num1%num2;
	}
	return num2;
}
