#include <stdio.h>

int main()
{
    int arr[] = {65,25,12,22,11};
    int i,j, p;
    for(i=0; i<5-1; i++)
    {
        p=i;
        for(j=i+1; j<5; j++)
        {
            if(arr[j]<arr[p])
                p = j;
        }
        int temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
    }
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}