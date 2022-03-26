#include<stdio.h>
int kl(int ar[],int n, int k);
int main()
{
    int ar[50], i, size, k, large;
    printf("Input the size of array:\n");
    scanf("%d", &size);
    printf("Input %d elements in array:\n", size);
    for(i=0; i<size; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&ar[i]);
    }
    printf("\n Enter which position of largest element is required: \n");
    scanf("%d", &k);
    large = kl(ar[50],size,k);
    printf("\n %d largest element in array is %d", k, large);
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
                ar[j+1] = ar[j];
                ar[j+1] = temp;
            }
        }
    }
    return ar[k-1];
}