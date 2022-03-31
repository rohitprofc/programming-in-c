#include<stdio.h>
#include<math.h>
void main()
{
    int a[100];
    int i,n;
    float mean,var,sum=0;
    printf("Enter the no.of elements: \n");
    printf("-------------------------\n");
    scanf("%d",&n);
    printf("Enter the elements of an array:\n");
    printf("-------------------------------\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    mean = sum/n;
    printf("Mean = %f\n",mean);

        for (i=0; i<n; i++)
        {
            sum = sum + pow((a[i]-mean),2);
        }

        var = sum/n;
        printf("Variance = %f \n",var);  
}
/*
Output:-
Enter the no.of elements: 
-------------------------
3
Enter the elements of an array:
-------------------------------
10
20
30
Mean = 20.000000
Variance = 86.666664 
*/
