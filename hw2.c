#include<stdio.h>
int main()
{
    int a[10],i;
    int n,value,pos;
    printf("Enter The size of array:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert :- ");
    scanf("%d",&pos);

    printf("Enter the Value:- ");
    scanf("%d",&value);

    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    n=n+1;
    for(i=0;i<=n-1;i++)
    {
        printf("%d",a[i]);
    }
}