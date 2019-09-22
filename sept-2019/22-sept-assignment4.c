#include<stdio.h>
#include<string.h>
struct Student
{
    char name[20];
    int roll_no;
};
void struct_display(struct Student*a,int n);
int main()
{
    int i,n;
    struct Student s1[20];
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    printf("enter student name and roll no");
    scanf("%s",&s1[i].name);
    scanf("%d",&s1[i].roll_no);
    }
    struct_display(s1,n);
    return 0;
}
void struct_display(struct Student* a,int n)
                    {

                        int i;
                        printf("data is:\n");
                        for(i=0;i<n;i++)
                            printf("%s--->\n",a[i].name,a[i].roll_no);

                    }

