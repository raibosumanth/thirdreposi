#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf("enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
           if(arr[j]>arr[j+1])    
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
        }
    for(j=0;j<n;j++)
        printf("%d ",arr[j]);

        
}
git
