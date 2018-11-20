#include<stdio.h>
int main()//CHECK TILL 8 FACTORIAL YOU WILL GET ANS FOR EVERY PROBLEM
{	int num,b[200],a[200],carry=0,s[200],k=0,i,m=1,f;
	for(i=1;i<200;i++){
		a[i]=0;
	}
	a[0]=1;
	printf("Entere the number");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		b[k]=(a[k]*i)+carry;
		a[k]=b[k]%10;
		carry=b[k]/10;
		s[m]=k;//ye k ki value ko store kar lega aur bta dega ki pichle number me kitne digit the=s[m-1]  
		if(b[k]==0){
			k++;
		}
		else{
			if(carry==0){
				if(m>0&&(k<s[m-1])){
					k++;
				}
			else{
				i++;
				m++;
				f=k;
				k=0;			
			}
			}
			if(carry!=0){
				k++;
			}
		}
	}
	for(i=0;i<=f;i++){
		printf("%d",a[f-i]);
	}
}
