#include <iostream>
#include <algorithm>

namespace programNamespace {
    using namespace std;
    int n, Q, a[8010], flag = 0;
    struct stu {
        int num, id;
    } b[8010];
    int cmp(stu a, stu b) {
        if (a.num != b.num) {
            return a.num < b.num;
        }
        else {
            return a.id < b.id;
        }
    }

    int main() {
        ios::sync_with_stdio(false);
        cin >> n >> Q;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int t = 1; t <= Q; t++) {
            int opr, x, v;
            cin >> opr;
            if (opr == 1) {
                cin >> x >> v;
                a[x] = v;
                flag = 0;
            }
            if (opr == 2) {
                // 读入 x
                cin >> x;
                if (flag == 0) {
                    for (int i = 1; i <= n; i++) {
                        b[i].num = a[i];
                        b[i].id = i;
                    }
                    stable_sort(b + 1, b + n + 1, cmp);
                    flag = 1;
                }
                for (int i = 1; i <= n; i++) {
                    if (b[i].id == x) {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
