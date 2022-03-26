#include<stdio.h>
int main()
{
    int a,b,c,large,small;
    printf("Enter a,b,c values:\n");
    printf("-------------------\n");
    scanf("%d%d%d", &a,&b,&c);
    small= (a<b&&a<c)?a:(b<c)?b:c;
    large= (a>b&&a>c)?a:(b>c)?b:c;
    printf("Largest of 3 numbers is %d \n",large);
    printf("Smallest of 3 numbers is %d \n",small);
    return 0;
}
/*
Output:-
Enter a,b,c values:
-------------------
9
5
1
Largest of 3 numbers is 9 
Smallest of 3 numbers is 1 
*/