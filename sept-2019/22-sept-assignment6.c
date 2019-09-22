
#include<stdio.h>
void triangle(int n);
int main()
{

int n;
scanf("%d",&n);
triangle(n);

}
void triangle(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>1;k--)
            printf("  ");
        for(j=0;j<=i;j++)
            printf("* ");
        printf("|n");

    }
}
