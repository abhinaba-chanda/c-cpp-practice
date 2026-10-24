#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
    return 0;
}
