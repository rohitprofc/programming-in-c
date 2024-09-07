#include<stdio.h>
void main()
{
    int n,i;
    float sum = 0;
    printf("Enter n:\n");
    printf("--------\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i<n)
        {
            printf("1/%d +",i);
            sum += 1/(float)i;
        }
        if (i==n)
        {
            printf("1/%d ",i);
            sum += 1/(float)i;
        }
    }
    printf("Sum of Harmonic series upto %d is %f\n",n,sum);
}

/*
Output:-
Enter n
-------
5
1/1 +1/2 +1/3 +1/4 +1/5 Sum of Harmonic series upto 5 is 2.283334
*/