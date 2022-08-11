#include <iostream>
#include <string>

using namespace std;
string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
string str;
int initial, now, answer;

int main() {
    ios::sync_with_stdio(false);
    cin >> str;
    cin >> initial;
    for (int i = 0; i < 12; i++)
        if (month[i] == str) 
            now = i;
    answer = (now + initial) % 12;
    cout << month[answer] << endl;
    return 0;
}
