#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50],final[100];
    int i,j,k=0,p;
    printf("Enter String 1");
    gets(str1);
    printf("Enter String 2");
    gets(str2);
    printf("Enter position");
    scanf("%d",&p);
    for (i=0;i<p;i++)
    {
    final[i]=str1[i];
    }
    k=i;
    for (j=0;str2[j] != '\0';j++)
    {
        final[k] = str1[j];
        k++;
    }
    for(i=p;str1[i] != '\0';i++)
    {
        final[k] = str1[i];
        k++;
    }
    final[k] = '\0';
    printf("The resultant string is %s",final);
}