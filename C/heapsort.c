#include<stdio.h>
int main()
{
    int a[]={1,4,2};
    for(int i=0;i<3;i++)
    {
        if(a[i]>a[i+1])
        { int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            printf("%d",a[i]);
        }
    }
}