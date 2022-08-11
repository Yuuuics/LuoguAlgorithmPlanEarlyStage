#include <iostream>

using namespace std;
int n, cnt, target[7 + 1], a[7 + 1], sum[7 + 1];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= 7; i++)
        cin >> target[i];
    for (int i = 1; i <= n; i++) {
        for (int i = 1; i <= 7; i++) {
            cin >> a[i];
            if (a[i] == target[i]) cnt++;
        }
        sum[cnt]++;
        cnt = 0;
    }
    for (int i = 1; i <= 7; i++)
        cout << sum[i] << " ";
    puts("");
    return 0;
}
