// Online C compiler to run C program online
#include <stdio.h>
int partition(int arr[],int start,int end)
{
    int position=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=arr[end])
        {
            int temp=arr[i];
            arr[i]=arr[position];
            arr[position]=temp;
            position ++;
        }
    }
    return position -1;
}
void quicksort(int arr[],int start, int end)
{
    if(start<end){
            // return;
    int pivot=partition(arr,start,end);
    //left side 
    quicksort(arr,start,pivot-1);
    
    //right side
    quicksort(arr,pivot+1,end);}
}
int main() {
    int arr[]={10,3,4,5,6,3,2,11,9};
    int start=0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    quicksort(arr,start,end);
    printf("after sorting\n");
    for(int i=start;i<=end;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}