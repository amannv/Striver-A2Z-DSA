#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr) {
    
    //first pass
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // second pass
    int Slargest = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > Slargest && arr[i] != largest) {
            Slargest = arr[i];
        }
    }

    return Slargest;
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
    cout << secondLargest(arr);
}
