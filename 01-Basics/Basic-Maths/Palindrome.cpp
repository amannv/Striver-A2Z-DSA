#include <bits/stdc++.h>
using namespace std;

int palindromeDigit(int n)
{
    int reversedNum = 0;
    int originalNum = n;
    if (n < 0 || n % 10 == 0 && n != 0) {
        return false;
    }
    while (n != 0)
    {
        int lastDigit = n % 10;

        if (reversedNum > INT_MAX / 10 ||
            (reversedNum == INT_MAX / 10 && lastDigit > 7))
        {
            return false;
        }

        reversedNum = (reversedNum * 10) + lastDigit;
        n = n/10;
    }
    if (reversedNum == originalNum)
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
    int palindrome = palindromeDigit(n);
    cout << palindrome;
}