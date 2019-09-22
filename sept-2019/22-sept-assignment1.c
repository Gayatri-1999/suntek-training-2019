
#include<stdio.h>
int main()
{
    int i,j,m,max=0,temp=0;
    int a[10]={6,83,6,4,5,54};
    printf("enter m");
    scanf("%d",&m);
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(i=0;i<6;i++)
            printf("%d",a[i]);
        printf("\n");
        printf("%d",a[m-1]);
        return 0;
    }

}
