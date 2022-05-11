#include<stdio.h>
int main()
{
    int l,b,area,perimetre;
    printf("Enter l and b values\n");
    printf("--------------------\n");
    scanf("%d %d",&l,&b);
    area = l*b;
    perimetre = 2*(l+b);
    printf("Area of given Recatngle is %d\n",area);
    printf("Perimetre of given Recatngle is %d\n",perimetre);
    return 0;
}
/*
Output:-
Enter l and b values
--------------------
4
5
Area of given Recatngle is 20
Perimetre of given Recatngle is 18
*/
