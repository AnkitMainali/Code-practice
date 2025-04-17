#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin>> s;

    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    cout << "Lowercased string is: " << s << endl;
    return 0;
}
