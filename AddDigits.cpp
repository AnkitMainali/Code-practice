#include <iostream>
using namespace std;

int AddDigits(int num) {
    while (num > 9) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

// Example usage
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Single digit: " << AddDigits(num) << std::endl;

    return 0;
}


