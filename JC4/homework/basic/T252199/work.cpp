#include <iostream>

using namespace std;
int n, a[105], cnt;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n - 1; i++)     //大循环：i 从 1 到 n-1
        for (int j = i + 1; j <= n; j++) //小循环：j 从 i 的下一个到 n
            if (a[i] > a[j]) { //如果 a[i] 比 a[j] 小，交换他们
                swap(a[i], a[j]);
                cnt++;
            }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl << cnt << endl;
    return 0;
}
