#include<stdio.h>
#include<math.h>;
int sum(int a)
{
    int digit;
    int sum=0;
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    return sum;
}
int prime(int a)
{
    int i;
    if(a==2)return 1;
    else if(a==3)return 1;
    else if(a%2==0)return 0;
    else
    {
        for(i=1;i<=sqrt(a);i=i+2)
        {
            if(i==1)continue;
            if(a%i==0)return 0;
        }
    return 1;
    }
}
int main()
{
    int num1,num2,i,temp_sum=0;
    scanf("%d%d",&num1,&num2);
    if(num1%2==0)num1++;
    for(i=num1;i<=num2;i=i+2)
    {
        temp_sum=sum(i);
     //   printf("%temp sum=%d\n",temp_sum);
        if(prime(temp_sum))
        { //  printf("yes\n");
            if(prime(i))printf("%d ",i);
        }
    }
getch();
}
