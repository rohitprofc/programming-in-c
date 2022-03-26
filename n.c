#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;
    printf("Enter the no.of rows:\n");
    printf("---------------------\n");
    scanf("%d%d",&r1,&r2);
    printf("Enter the no.of colomn:\n");
    printf("-----------------------\n");
    scanf("%d%d",&c1,&c2);
    if(r2 !=  c1)
    {
        printf("Multiplication is not possible *|<_>|*\n");
        exit(0);
    }
    printf("Enter the first matrix element = \n");
    for (i=0; i<r1; i++)
    {
        for(j =0; j<r2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix element = \n");
    for (i=0; i<c1; i++)
    {
        for(j =0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(c1==r2)
    {
    printf("Matrix multiplication is possible\n");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            mul[i][j] = 0;
            for (k=0;k<c1;k++)
            {
                mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("Matrix multilpication not possible");
    
    return 0;
}
/*Output:-
Enter the no.of rows:
---------------------
2
2
Enter the no.of colomn:
-----------------------
2
2
Enter the first matrix element = 
2
2
2
2
Enter the second matrix element = 
2
2
2
2
Matrix multiplication is possible
88
88
*/