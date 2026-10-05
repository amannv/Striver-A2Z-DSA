#include <bits/stdc++.h>
using namespace std;

void RightRotateByK(int arr[], int n, int k)
{
    k = k % n;
    int temp[k];

    // storing shifted values in temp
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }

    // shifting the elements by d places
    for (int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }

    // putting back the elements from temp
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    RightRotateByK(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}