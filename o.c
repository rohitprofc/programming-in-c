#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int begin,end,mid,len=0,i=0;
    printf("\n Enter the String = ");
    gets(a);
    while (a[i] != '\0')
    {
        len++;
        i++;
    }
    end =len -1;
    mid = len/2;
    for(begin =0; begin<mid;begin++)
    {
        if (a[begin] != a[end])
        {
            printf("\nNOT PALINDROME\n");
            break;
        }
        end--;
    }
    if (begin == mid)
    printf("\nPALINDROME\n");
    return 0;
}
/* 
Output:-
 Enter the String = malayalam

PALINDROME
*/