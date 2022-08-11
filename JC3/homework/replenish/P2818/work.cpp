#include <iostream>
#include <string>

using namespace std;
long long n, ans;
string m;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> m;
    for (int i = 0; i < m.length(); i++)
        ans = (ans * 10 + m[i] - '0') % n;
    if (ans == 0) cout << n;
    else cout << ans;
    puts("");
    return 0;
}
