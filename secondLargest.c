#include <stdio.h>

int main()
{
    int arr[20];

    for (int i = 0; i < 20; i++)
    {
        arr[i] = i + 1;
    }

    // find the second largest number
    //  take two variable to track the larges value and shadow value
    int largest = 0, secondLargest = 0;

    for (int i = 0; i < 20; i++)
    {
        if (largest < arr[i])
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (secondLargest < arr[i])
        {
            secondLargest = arr[i];
        }
    }

    printf("The largest element of an array is %d  and second largest element is %d", largest, secondLargest);
}