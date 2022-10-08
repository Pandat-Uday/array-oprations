#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("\n Enter the array elemnts : ");
    for(i = 0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n The array elemts are : ");
    for(i = 0; i<10; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
