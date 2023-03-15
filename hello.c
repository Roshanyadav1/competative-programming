#include <stdio.h>

int main()
{
    int arr[20], a, b;

    for (int i = 1; i <= 20; i++)
    {
        arr[i] = i;
    }

    int max = 0, min = 0;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < 20; j++)
    {
        printf("\n the length of an arr is %d", arr[j]);
    }
}