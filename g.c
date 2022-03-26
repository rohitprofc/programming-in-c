#include<stdio.h>
void main()
{
    int n,rev=0,rem;
    printf("Enter n values:\n");
    printf("---------------\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        rev = (rev*10)+rem;
        n =n/10;
    }
    printf("Reverse is %d\n",rev);
}
/*
Output:-
Enter n values:
---------------
96
Reverse is 69
*/