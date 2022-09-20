#include<iostream>

    int main()
    {
        
        int a[8];
        int i,value,position;
        for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }   
        printf("Enter a value you need to insert:- ");
        scanf("%d",&value);
        printf("Enter position:- ");
        scanf("%d",&position);

        for(i=0;i<position;i++)
        {
            a[position]=value;
        }

        for(i=0;i<5;i++)
        {
            printf("%d",a[i]);
        }
        
        
                         
        
        
        
    }               