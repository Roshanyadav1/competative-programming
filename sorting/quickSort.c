#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int low, int high)
{
    int pivot = low; // choose the rightmost element as the pivot
    int i = low;     // the left pointer i points to the element right before the first element
    int j = high;

    while (i < j)
    {
        while (arr[i] <= arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot])
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[j], &arr[pivot]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // partition the array around the pivot
        printf("Pivot is %d \n", pi);
        quickSort(arr, low, pi - 1);  // recursively sort the left subarray
        quickSort(arr, pi + 1, high); // recursively sort the right subarray
    }
}

int main()
{
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
