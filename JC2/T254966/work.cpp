#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, maxid;
    string maxn = "", userInput;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> userInput;
        int userSize = userInput.size();
        int maxSize = maxn.size();
        if (userSize > maxSize || userSize >= maxSize && userInput > maxn) {
            maxn = userInput;
            maxid = i;
        }
    }
    cout << maxid << endl << maxn << endl;
    return 0;
}
