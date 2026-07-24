#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k)
{

    unordered_map<int, int> mpp;

    for (int x : nums)
    {
        mpp[x]++;
    }

    for (auto it : mpp)
    {
        k = max(it.second, k);
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    vector<int> number(n);

    for (int i = 0; i < number.size(); i++)
    {
        cin >> number[i];
    }

    int k = 0;
    cout << maxFrequency(number, k);
    return 0;
}