#include<stdio.h>
int merge(int arr[],int p,int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[p+i-1];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[q+j];
        
    }
    int i,j,k;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i = i+1;
        }
        else {
            arr[k]= R[j];
            j = j+1;
        }
    }

}
int mergesort(int arr[],int p,int r){
    if(p<r){
     int q = (p+r)/2;
     mergesort(arr,p,q);
     mergesort(arr,q+1,r);
     merge(arr,p,q,r);
    }
}
int printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int size;
    
    printf("Enter the value of size of the array = ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d elements of the array = ",size);
    for(int i=0;i<size;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergesort(arr,0,size-1);
    printf("\nSorted array is \n");
    printArray(arr, size);

    return 0;
}