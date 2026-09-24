#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> a, int n) {
    int i=0;
    for (int j=1; j<n; j++) {
        if (a[j] != a[i]) {
            a[i+1] = a[j];
            i++;
        }
    }
    return (i+1);
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
    cout << removeDuplicates(arr, n);

    return 0;
}
