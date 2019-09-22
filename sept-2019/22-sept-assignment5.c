
#include<stdio.h>
void table_of_num(int i,int n);
int main()
{

    int i,n;
    scanf("%d",&n);
    for(i=1;i<11;i++)
        table_of_num(i,n);
    return 0;
}
void table_of_num(int i,int n)
{
    printf("%d * %d=%d\n",n,i,n*i);
}
