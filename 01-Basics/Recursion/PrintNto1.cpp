#include<bits/stdc++.h>
using namespace std;

int PrintNTo1(int n) {
    if ( 1 <= n ) {
    cout << n << endl;
    n--;
    }
    PrintNTo1(n); 
}

int main() {
    int n;
    cin >> n;
    PrintNTo1(n);
}