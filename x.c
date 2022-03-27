#include<stdio.h>
struct student
{
    char name[100];
    int m1,m2,m3,m4,m5,m6,tot;
}s[100];
void main()
{
    int n,i;
    printf("Enter no.of students:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter Name,m1,m2,m3,m4,m5,m6 of student %d", i++);
    }
}
