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

    string a;
    cout << "Enter a string: ";
    cin>>a;
    int size = a.length();
    char s[size + 1];

    for (int i = 0; i < size; ++i) {
        s[i] = a[i];
    }
    
    reverseString(s, size);
    cout << "Reversed string: ";
    for (int i = 0; i < size; ++i) {
        cout << s[i];
    }

    return 0;
}
