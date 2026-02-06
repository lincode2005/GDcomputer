#include <stdio.h>

void insert_sort(int *arr, int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        k = arr[i];
        j = i-1;
        while (j>=0&&arr[j]>k)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
}

int main()
{
    int arr[5] = {8, 4, 2, 9, 6};
    insert_sort(arr, 5);
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}