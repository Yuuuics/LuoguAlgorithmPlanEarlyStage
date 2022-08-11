#include <iostream>
#include <string>

using namespace std;
int n;
bool tof[105];
char systemOutput[105] = {"****ABCDEFGHIJKLMNOPQRSTUVWXYZ***"};
string a[10005], b;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> b;
    for (int i = 1; i <= n; i++) {
        int lenA = a[i].size(), lenB = b.size();
        int x = a[i].find(b);
        if (x == 0) tof[a[i][lenB] - 'A' + 4] = 1;
    }
    int pos = 0;
    for (int i = 1; i <= 32; i++) {
        if (tof[i]) cout << systemOutput[i];
        else cout << "*";
        pos++;
        if (pos == 8) {
            cout << endl;
            pos = 0;
        }
    }
    return 0;
}
