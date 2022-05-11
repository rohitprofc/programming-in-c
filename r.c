#include<stdio.h>
int kl(int ar[],int n, int k);
int main()
{
    int ar[50], i, size, k, large;
    printf("Input the size of array:\n");
    printf("------------------------\n");
    scanf("%d", &size);
    printf("Input %d elements in array:\n", size);
    printf("---------------------------\n");
    for(i=0; i<size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("\nEnter which position of largest element is required: \n");
    printf("------------------------------------------------------\n");
    scanf("%d", &k);
    large = kl(ar,size,k);
    printf("\n%d largest element in array is %d\n", k, large);
    return 0;
}
int kl(int ar[], int n, int k)
{
    int i, j, temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-1; j++)
        {
            if(ar[j] < ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    return ar[k-1];
}
/*
Input the size of array:
------------------------
3
Input 3 elements in array:
---------------------------
Element 1: 1
Element 2: 4
Element 3: 3

Enter which position of largest element is required: 
------------------------------------------------------
2

2 largest element in array is 3
*/