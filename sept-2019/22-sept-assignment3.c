
#include<stdio.h>
int main()
{
    int num,reverse_number;
    printf("enter any  number");
    scanf("%d",&num);
    reverse_number=reverse_function(num);
    printf("after reverse the  o is:%d",reverse_number);
    return 0;

}
int sum=0,rem;
reverse_function(int num)
{

if(num)
{
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
}
else
    return sum;

}
