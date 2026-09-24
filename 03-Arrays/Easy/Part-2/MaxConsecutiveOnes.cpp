#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> arr, int n)
{
    int maximum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 0;
        }
    }
    return maximum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxConsecutiveOnes(arr, n);
}