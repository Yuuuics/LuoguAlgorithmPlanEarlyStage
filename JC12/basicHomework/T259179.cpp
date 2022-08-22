#include <iostream>
#include <queue>

namespace programNamespace {
    using namespace std;
    int n, a, x;
    queue<int> q;

    int main() {
        ios::sync_with_stdio(false);
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            if (a == 1) {
                cin >> x;
                q.push(x);
            }
            if (a == 2) {
                if (!q.empty()) q.pop();
                else cout << "ERR_CANNOT_POP" << endl;
            }
            if (a == 3) {
                if (!q.empty()) cout << q.front() << endl;
                else cout << "ERR_CANNOT_QUERY" << endl;
            }
            if (a == 4) cout << q.size() << endl;
        }
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
