#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[10];
    for (int i - 0; i < 10; i++)
    {
        // get the random number under the max limit of 100
        arr[i] = rand() % 100 + 1;
    }

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] <= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is :-- \n");
    for (int i = 0; i < len; i++)
    {
        printf("Elements are : %d \n", arr[i]);
    }
}