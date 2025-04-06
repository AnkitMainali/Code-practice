#include <iostream>
using namespace std;

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Swap characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Example input
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    int size = sizeof(s) / sizeof(s[0]);

    reverseString(s, size);

    // Output the reversed array
    cout << "Reversed string: ";
    for (int i = 0; i < size; ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
