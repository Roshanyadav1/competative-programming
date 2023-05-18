#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int N, A, B, C, total_dish = 0, rem = 0;
        cin >> N >> A >> B >> C;

        if (B > A)
        {
            rem = B - A;
        }
        else
        {
            rem = A - B;
        }
        cout << "rem " << rem;

        total_dish = min(A, rem) + min(C, rem);

        if (total_dish >= N)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
