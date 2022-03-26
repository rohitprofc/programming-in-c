#include<stdio.h>
int main()
{
    int n,sum=0,temp,rem;
    printf("Enter n values:\n");
    printf("---------------\n");
    scanf("%d",&n);
    temp = n;
    while(n !=0)
    {
        rem  = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(temp == sum)
    {
        printf("|\n");
        printf("v\n");
        printf("Number is Armstrong\n");
    }
    
    else
    {
        printf("|\n");
        printf("v\n");
        printf("Number is not Armstrong\n");
    }
}
/*
Output:-
Enter n values:
---------------
371
|
v
Number is Armstrong
*/