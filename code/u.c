#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char *ptr;
    int ctrv,ctrc;
    printf("Input a String:\n");
    printf("----------------\n");
    gets(str1);
    ptr = str1;
    ctrv = ctrc = 0;
    while(*ptr != '\0')
    {
        if(*ptr == 'A'||*ptr == 'E'||*ptr == 'I'||*ptr == 'O'||*ptr == 'U'||*ptr == 'a'||*ptr == 'e'||*ptr == 'i'||*ptr == 'o'||*ptr == 'u')
        {
            ctrv++;
        }
        else
        {
            ctrc++;
        }
        ptr++;
    }
    printf("Number of vowels in string: %d\n",ctrv);
    printf("Number of consonants in string: %d\n",ctrc);
    return 0;
}
/*
Output:-
Input a String:
----------------
RohitChess
Number of vowels in string: 3
Number of consonants in string: 7
*/