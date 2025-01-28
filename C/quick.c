#include <stdio.h>

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j < high; j++) {
       
        if (arr[j] <= pivot) {
            i++; 
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {75, 43, 12, 1, 2, 45, 100, 54, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quicksort(arr, 0, n - 1);

    printf("Sorted arr = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
