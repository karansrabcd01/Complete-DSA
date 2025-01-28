#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element : ");
    
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    
    }
    for(int k=n;k>0;k--)
    {
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("after sorting the array is : ");
    for(int i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    
    }
    return 0;
}