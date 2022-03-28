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
        printf("Enter Name,m1,m2,m3,m4,m5,m6 of student: %d\n", i+1);
        printf("----------------------------------------\n");
        scanf("%s%d%d%d%d%d%d", s[i].name,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5,&s[i].m6);
    }
    for(i=0; i<n; i++)
    {
        s[i].tot = s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5+s[i].m6;
    }
    printf("Details of %d students:\n", n);
    printf("------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d",s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5,s[i].m6,s[i].tot);
        printf("\n");
    }
}
/*
Output:-
Enter no.of students:
2
Enter Name,m1,m2,m3,m4,m5,m6 of student: 1
----------------------------------------
Rohit 8 9 8 9 8 9 
Enter Name,m1,m2,m3,m4,m5,m6 of student: 2
----------------------------------------
Maggie 9 9 9 9 9 9
Details of 2 students:
------------------------
Rohit   8       9       8       9       8       9       51
Maggie  9       9       9       9       9       9       54
*/
