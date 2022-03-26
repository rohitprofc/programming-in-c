#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if (a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    else
    return gcd(a,b-a);
}
int main()
{
    int a,b;
    printf("\n\nEnter two numbers to find GCD \n");
    printf("----------------------------------\n");
    scanf("%d%d", &a,&b);
    printf("GCD of %d and %d is %d\n", a,b,gcd(a,b));
    return 0;
}
/*
Output:-
Enter two numbers to find GCD 
----------------------------------
5 4
GCD of 5 and 4 is 1
*/