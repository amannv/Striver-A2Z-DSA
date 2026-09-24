#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int Slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > Slargest)
        {
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int secondSmallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int Ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < Ssmallest)
        {
            Ssmallest = arr[i];
        }
    }
    return Ssmallest;
}

vector<int> secondOrderElements(vector<int> a, int n)
{
    int Slargest = secondLargest(a, n);
    int Ssmallest = secondSmallest(a, n);
    return {Slargest, Ssmallest};
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
    vector<int> result = secondOrderElements(arr, n);
    cout << result[0] << " " << result[1];

    return 0;
}