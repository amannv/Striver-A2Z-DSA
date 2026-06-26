#include<bits/stdc++.h>
using namespace std;

int cnt = 0;  

int PrintName(int n) {
    if ( cnt < n ) {
    cout << "Aman" << endl;
    cnt++;
    }
    PrintName(n); 
}

int main() {
    int n;
    cin >> n;
    PrintName(n);
}