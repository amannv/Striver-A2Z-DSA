#include <bits/stdc++.h>
using namespace std;

int armstrongDigit(int n)
{
    int originalNum = n;
    int armstrongNum = 0;
    while (n != 0)
    {
        int ld = n % 10;
        int armstrongDigit = (ld * ld * ld * ld);
        armstrongNum = armstrongNum + armstrongDigit;
        n = n / 10;
    }
    if (originalNum == armstrongNum)
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
    int armstrongNum = armstrongDigit(n);
    cout << armstrongNum;
}