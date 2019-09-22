
#include<stdio.h>
int count_of_element(int*a,int n,int se);
int main()
{
int a[100],i,n,se;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
scanf("%d",&se);
printf("%d",count_of_element(a,n,se));
return 0;
}
int count_of_element(int*a,int n,int se)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
            count++;
    }
    if(count>1)
        return count;
    else
        return -1;
}
