#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) {
        return 1; 
    }

    if (n < 0) {
        x = 1 / x;
        n = -n; 
    }

    double result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x; 
        }
        x *= x;
		n /= 2;
    }

    return result;
}

int main() {
    double x;
    int n;
    cout << "Enter base x: ";
    cin >> x;
    cout << "Enter exponent n: ";
    cin >> n;

    double result = myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}
