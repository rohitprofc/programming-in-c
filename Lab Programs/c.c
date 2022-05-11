#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("Enter a,b,c values:\n");
    printf("-------------------\n");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %f\n",area);
    return 0;
}
/*
Output:-
Enter a,b,c values:
-------------------
5
5
5
Area of Triangle is 7.483315
*/
