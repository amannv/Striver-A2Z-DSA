#include<iostream>

int frequency = 0;  

void PrintNNumbers(int n) {
    if (frequency > n) return;
    std::cout << frequency << std::endl;
    frequency++;
    PrintNNumbers(n);
}

int main() {
    int n;
    std::cin >> n;
    PrintNNumbers(n);
}