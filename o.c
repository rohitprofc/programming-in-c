#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int begin,end,mid,len=0,i=0;
    printf("\nEnter the String = ");
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
            printf("\n%s is NOT PALINDROME\n",a);
            break;
        }
        end--;
    }
    if (begin == mid)
    printf("\n%s is PALINDROME\n",a);
    return 0;
}
/* 
Output:-
Enter the String = malayalam

malayalam is PALINDROME
*/