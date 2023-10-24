// Given a number n, write a function that returns count Of numbers from 1 to n that
// don't contain digit 3 in their decimal representation. c++ code
#include <iostream>

int countNumbersWithout3(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        bool hasDigit3 = false;
        while (num > 0) {
            if (num % 10 == 3) {
                hasDigit3 = true;
                break;
            }
            num /= 10;
        }
        if (!hasDigit3) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number (n): ";
    std::cin >> n;
    
    int result = countNumbersWithout3(n);
    
    std::cout << "Count of numbers from 1 to " << n << " that don't contain the digit 3: " << result << std::endl;
    
    return 0;
}
