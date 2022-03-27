#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50],str3[50];
    int i,j,k,p;
    printf("\nEnter Main String:\n");
    printf("--------------------\n");
    gets(str1);
    printf("Enter Substring:\n");
    printf("----------------\n");
    gets(str2);
    printf("Enter position: ");
    scanf("%d",&p);
    for(i=0; i<p; i++)
    {
        str3[i] = str1[i];
    }
    for(j=0; str2[j] != '\0'; j++)
    {
        str3[i++] = str2[j];
    }
    for(k=p-1; str1[k] != '\0'; k++)
    {
        str3[i++] = str1[k];
    }
    str3[i] = '\0';
    printf("Final string is %s\n", str3);
}
/*
Output:- 
Enter Main String:
------------------
Rohit
Enter Substring:
----------------
Chess
Enter position: 5
Final string is RohitChess
*/