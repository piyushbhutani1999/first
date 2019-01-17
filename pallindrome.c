#include<stdio.h>
#include<math.h>
int get_range(int digit);
int num_get(int pc_startdigit,int start_digit);
int get_ten(int digits);
int get_starting_numbers(int start_num,int digits);
int find_digit(int a);
int get_reverse(int pc_startdigit);
int main()
{   int tst;
    scanf("%d",&tst);
    while(tst--)
    {
        int start_num,end_num,start_digit,end_digit,total_pallindrome=0,pc_startdigit,k=1,pc_enddigit;
        scanf("%d%d",&start_num,&end_num);
        start_digit = find_digit(start_num);
        end_digit = find_digit(end_num);
        if(start_digit==1 && end_digit!=1)
        {
            total_pallindrome = 10-start_num;
            start_num=10;
            start_digit++;
        }
        if(start_digit==1 && end_digit==1)
        {
            total_pallindrome = end_num-start_num+1;
        }
        else
        {
            while(1)
            {

                if(start_digit!=end_digit)
                {
                    if(k==1)
                    {
                        pc_startdigit = get_starting_numbers(start_num,(start_digit+1)/2);
                        if(num_get(pc_startdigit,start_digit)<start_num)
                        {
                            total_pallindrome--;
                        }
                        k=0;
                    }
                    else
                    {
                        pc_startdigit = get_ten((start_digit+1)/2);
                    }
                    total_pallindrome = total_pallindrome + (get_range((start_digit+1)/2)-pc_startdigit+1);
          //          printf("----------\n");
          //          printf("total pallin = %d get_range=%d  pc_startdigit=%d\n",total_pallindrome ,get_range((start_digit+1)/2),pc_startdigit);
          //          printf("----------\n");
                }
                else
                {
                    if(k==1)
                    {
                        pc_startdigit = get_starting_numbers(start_num,(start_digit+1)/2);
                        if(num_get(pc_startdigit,start_digit)<start_num)
                        {
                            total_pallindrome--;
                        }
                    }
                    else pc_startdigit = get_ten((start_digit+1)/2);
                    pc_enddigit = get_starting_numbers(end_num,(end_digit+1)/2);
                    if(num_get(pc_enddigit,end_digit)>end_num)
                    {
                        total_pallindrome--;
                    }
                    total_pallindrome = total_pallindrome + (pc_enddigit-pc_startdigit+1);
          //          printf("----------\n");
          //          printf("total pallin = %d pc_enddigit=%d  pc_startdigit=%d\n",total_pallindrome ,pc_enddigit,pc_startdigit);
          //          printf("numget = %d\n",num_get(pc_enddigit,end_digit));
          //          printf("----------\n");
                    break;
                }
                start_digit++;
            }

        }
        printf("%d\n",total_pallindrome);
    }
}
int find_digit(int a)
{
    int temp = a;
    int store = 0;
    while(temp >0)
    {
        temp = temp/10;
        store++;
    }
  //  printf("find_digit = %d\n",store);
    return store;
}
int get_starting_numbers(int start_num,int digits)
{
    int get = find_digit(start_num);
    int s = pow(10,get-digits);
    int a = start_num/s;
  //  printf("get_starting_numbers = %d\n",a);
    return a;
}
int get_ten(int digits)
{
    digits--;
    int a = pow(10,digits);
  //  printf("get_ten = %d\n",a);
    return a;
}
int num_get(int pc_startdigit,int start_digit)
{
    int pallin;
    if(start_digit%2!=0)
    {
        pallin = get_reverse(pc_startdigit/10);
    }
    else pallin = get_reverse(pc_startdigit);
    pc_startdigit = (pc_startdigit*pow(10,start_digit/2))+pallin;
//    printf("num_get =%d\n",pc_startdigit);
    return pc_startdigit;
}
int get_range(int digit)
{
    int num = 0;
    while(digit--)
    {
        num = (num*10)+9;
    }
   // printf("get_range = %d\n",num);
    return num;
}
int get_reverse(int pc_startdigit)
{
    int temp =pc_startdigit;
    int digit,num=0;
    while(temp>0)
    {
        digit = temp%10;
        num = (num*10)+digit;
        temp = temp/10;
    }
   // printf("reverse = %d\n",num);
    return num;
}
