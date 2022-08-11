#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const long long maxn = 0x7fffff;
long long a[maxn], b, c[maxn], p, len;
string A;

int main() {
    ios::sync_with_stdio(false);
    cin >> A >> b;
    if (A == "0") cout << 0 << endl;
    len = A.length();
    for (int i = 1; i <= len; i++) {
        a[i] = A[i - 1] - '0';
    }
    for (int i = 1; i <= len; i++) {
        p = p * 10 + a[i];
        c[i] = p / b;
        p = p % b;
    }
    bool flag = 0;
    for (int i = 1; i <= len; i++) {
        if (flag == 0) {
            if (c[i] == 0) {
                continue;
            } else {
                flag = 1;
            }
        }
        cout << c[i];
    }
    puts("");
    return 0;
}
