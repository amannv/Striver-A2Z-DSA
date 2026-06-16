#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;

        if (rev > INT_MAX / 10 ||
            (rev == INT_MAX / 10 && digit > 7))
            return 0;

        if (rev < INT_MIN / 10 ||
            (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = (rev * 10) + digit;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    int reversedDigit = reverseDigits(n);
    cout << reversedDigit;
}