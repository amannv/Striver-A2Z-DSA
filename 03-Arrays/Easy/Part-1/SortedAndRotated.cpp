#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int i = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[(i + 1) % nums.size()])
        {
            count++;
        }
    }

    if (count <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    cout << check(arr);

    return 0;
}
