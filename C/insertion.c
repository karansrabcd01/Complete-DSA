#include<stdio.h>
int insert(int arr[],int n){
    int temp,j;
    for(int i =1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={24,65,12,75,98,100,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}