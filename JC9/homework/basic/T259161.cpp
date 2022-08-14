#include <iostream>
#include <algorithm>

using namespace std;
int f[100005],n,k;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    f[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1;j <= min(i,k); j++)
            f[i] = (f[i] + f[i-j]) % 100003;
    }
    cout << f[n];
    return 0;
}
