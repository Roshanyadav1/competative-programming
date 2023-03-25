#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_profit(vector<int> &prices)
{
    if (prices.size() < 2)
    {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        min_price = min(min_price, prices[i]);
        max_profit = max(max_profit, prices[i] - min_price);
    }

    return max_profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << max_profit(prices) << endl; // Output: 5

    return 0;
}
