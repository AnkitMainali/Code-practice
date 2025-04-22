#include <iostream>

using namespace std;

char Difference(const char* s,const char* t) {
    char result = 0;
    int i = 0;

    // XOR characters of s
    while (s[i] != '\0') {
        result ^= s[i];
        i++;
    }
    
    i=0;

    // XOR characters of t
    while (t[i] != '\0') {
        result ^= t[i];
        i++;
    }

    return result;
}

int main() {
    const char* s = "abcd";
    const char* t = "abcde";

    cout << "The extra letter is/are: " << Difference(s, t) << endl;
    return 0;
}
