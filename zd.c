#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fr;
    char fname[100], ch;
    int noc=0, now=0, nol=0;
    printf("Enter file name: \n");
    printf("----------------\n");
    gets(fname);
    fr = fopen(fname,"r");
    if(fr == NULL)
    {
        printf("\nERROR\n");
    }
    else
    {
        while((ch=fgetc(fr)) != EOF)
        {
            if(ch!= ' ' && ch!= '\n')
                noc++;
            if(ch== ' '|| ch== '\n')
                now++;
            if(ch== '\n')
                nol++;
        }
        if (ch>0)
        {
            now++;
            nol++;
        }
        printf("\n> No.of Characters = %d",noc);
        printf("\n> No.of Words = %d",now);
        printf("\n> No.of Lines = %d\n",nol);
    }
    fclose(fr);
    return 0;
}
/*
Output:-
Enter file name: 
----------------
rohi.txt

> No.of Characters = 10
> No.of Words = 2
> No.of Lines = 2
*/