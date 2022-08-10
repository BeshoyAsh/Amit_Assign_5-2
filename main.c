#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[5];
    for (i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");

    for (i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReversed array");
    for (j=5;j>=0;--j)
    {
        printf("%d\t",arr[j]);
    }

    return 0;
}
