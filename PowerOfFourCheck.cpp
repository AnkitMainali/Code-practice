#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0)
	 return false;

    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isPowerOfFour(n)) {
        cout << n << " is a power of four." << endl;
    } else {
        cout << n << " is not a power of four." << endl;
    }

    return 0;
}
