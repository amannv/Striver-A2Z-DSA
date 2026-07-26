#include <bits/stdc++.h>
using namespace std;

int MaxFrequency(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    long long windowSum = 0;
    int left = 0;
    int ans = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        windowSum += nums[right];

        while ((long long)nums[right] * (right - left + 1) - windowSum > k)
        {
            windowSum -= nums[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }

    int k;
    cin >> k;

    cout << MaxFrequency(num, k);
}