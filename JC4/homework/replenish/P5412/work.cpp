#include <iostream>
#include <algorithm>

using namespace std;
struct node {
    double height;
    bool sex;
} a[10010];
double womenHeight[10010], menHeight[10010];
int t, n, i, womenCnt, menCnt;

int main() {
    ios::sync_with_stdio(false);
    cin >> t >> n;
    while (t--) {
        for (i = 1; i <= n; i++)
            cin >> a[i].sex;
        for (i = 1; i <= n; i++)
            cin >> a[i].height;
        womenCnt = menCnt = 0;
        for (i = 1; i <= n; i++)
            if (a[i].sex == 0)
                womenHeight[++womenCnt] = a[i].height;
            else
                menHeight[++menCnt] = a[i].height;
        sort(womenHeight + 1, womenHeight + womenCnt + 1);
        sort(menHeight + 1, menHeight + menCnt + 1);
        for (i = 1; i <= womenCnt; i++)
            cout << womenHeight[i] << ' ';
        cout << endl;
        for (i = 1; i <= menCnt; i++)
            cout << menHeight[i] << ' ';
        cout << endl;
    }
    return 0;
}
