// Selection Sort
#include<stdio.h>
int main()
{
    int arr[]={7,4,10,8,3,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)// loop chalega n-1=6-1=5-1=4+1(for 0) baar
    {
        int min =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }

        }
     if(min!=i)
     {
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
     }
    }
    printf("sorted array : ");
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
return 0;
}