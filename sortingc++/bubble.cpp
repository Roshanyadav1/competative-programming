#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 98, 5, 6, 3, 98, 9};

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

    cout << "The sorted elements are : \n"
         << endl;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}