#include<stdio.h>
void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key=a[i];
        int j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=key;
    }
}
int main()
{
    int a[]= {5,2,4,6,1,3};

    insertion_sort(a,6);

    for(int i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
