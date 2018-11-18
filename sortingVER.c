#include<stdio.h>
int main()
{	int num,a[100],count=0,temp,i,j;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	while(count<4)
	{
		for(i=0;i<num-1;i++){
		for(j=i+1;j<num;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	count++;
	}
	for(i=0;i<num;i++){
		printf("%d",a[i]);
	}
	
}
