#include <iostream>

using namespace std;
int x, y, d, n, maxn, cnt, tot = 1;
int cross[170][170];

int main() {
    ios::sync_with_stdio(false);
    cin >> d;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        cin >> cross[x + 20][y + 20];
    }
    for (int i = 20; i <= 148; i++)
        for (int j = 20; j <= 148; j++) {
            for (int a = i - d; a <= i + d; a++)
                for (int b = j - d; b <= j + d; b++)
                    cnt += cross[a][b];
            if (maxn == cnt)
                tot++;
            else if (maxn < cnt)
                tot = 1;
            maxn = max(maxn, cnt);
            cnt = 0;
        }
    cout << tot << " " << maxn;
    return 0;
}
