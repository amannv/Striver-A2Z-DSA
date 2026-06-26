#include<bits/stdc++.h>
using namespace std;

int cnt = 1;  

int Print1ToN(int n) {
    if ( cnt <= n ) {
    cout << cnt << endl;
    cnt++;
    }
    Print1ToN(n); 
}

int main() {
    int n;
    cin >> n;
    Print1ToN(n);
}