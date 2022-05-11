#include<stdio.h>
void main()
{
    int n,a[100],count=0;
    int i,j,k;
    printf("Enter the no.of elements:\n");
    printf("-------------------------\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    printf("---------------------\n");
    for ( i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnique element found in array :");
    for ( i=0; i<n ; i++)
    {
        count =0;
        for (j=0,k=n; j<k+1; j++)
        {
            if(i != j)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
        }
        if (count==0)
            {
                printf("%d",a[i]);
           }
    }
    printf("\n\n");
}
/* 
Output:-
Enter the no.of elements:
-------------------------
3
Enter array elements:
---------------------
2
2
1

Unique element found in array :1
*/