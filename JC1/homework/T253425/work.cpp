#include <iostream>
#include <string>

using namespace std;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') cout << "T";
        else if (s[i] == 'T') cout << "A";
        else if (s[i] == 'G') cout << "C";
        else if (s[i] == 'C') cout << "G";
    }
    puts("");
    return 0;
}
