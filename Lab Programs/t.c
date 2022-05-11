#include<stdio.h>
void main()
{
    int *p, a[10], n, i, sum=0;
    printf("Enter no.of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    printf("----------------\n");
    for(i=0; i<n; i++)
    scanf("%d",(a+i));
    p = a;
    for(i=0; i<n; i++)
    {
        sum = sum+ *p;
        p++;
    }
    printf("Sum is %d\n", sum);
}
/*
Output:-
Enter no.of elements:
3
Enter elements:
----------------
1 2 3 
Sum is 6
*/