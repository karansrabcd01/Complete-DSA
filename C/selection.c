#include<stdio.h>
int selection(int arr[],int n){
    int min;
    int temp;
    int j;
    for(int i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            temp = arr[i]+arr[min];
            arr[min]=temp-arr[min];
            arr[i]=temp - arr[i];
        }
    
    }
}
int main(){
    int arr[]={75,43,12,1,2,45,100,54,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    printf("Soorted arr = ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}