#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter n value:\n");
    printf("--------------\n");
    scanf("%d",&n);
    printf("--------------\n");
    printf("Inverted pyramid of %d lines\n",n);
    printf("----------------------------\n");
    for(i=n;i>=1;i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
/*
Output:-
Enter n value:
--------------
5
--------------
Inverted pyramid of 5 lines
----------------------------
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
*/