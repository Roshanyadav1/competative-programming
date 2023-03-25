#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector in just an dynamic array
    vector<int> myvector;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(50);

    for (int i = 0; i < myvector.size(); i++)
    {
        cout << "elements are" << myvector.at(i) << endl;
    }
};