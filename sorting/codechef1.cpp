#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                c++;
            if (a[i] == 0)
            {
                c = 0;
                break;
            }
        }
        if (c % 2 == 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}
