#include <stdio.h>
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 50, 70, 80, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("enter the number you want to search : ");
    scanf("%d", &key);
    int result = linearsearch(arr, n, key);
    if (result != -1)
    {
        printf("The index of the number in array is %d ", result);
    }
    else
    {
        printf("The number you entered is not found in this array");
    }
    return 0;
}