#include <iostream>
#include <algorithm>

using namespace std;
int t[605], n, w, x;

int main() {
    cin >> n >> w;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        t[x]++;
        int sum = 0;
        for (int j = 600; j >= 0; j--) {
            sum += t[j];
            if (sum >= max(1, i * w / 100)) {
                cout << j << ' ';
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
