#include <bits/stdc++.h>
using namespace std;

void leftRotateByK(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];

    // storing shifted values in temp
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shifting the elements by d places
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // putting back the elements from temp
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
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
    leftRotateByK(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}