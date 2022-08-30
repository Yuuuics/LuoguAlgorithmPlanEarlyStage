#include <bits/stdc++.h>

namespace Solution {
    using namespace std;
    char ino[900000005];

    int convert10(int l, int r) {
        int n = 0;
        for (int i = l; i < r; i++)     // 左闭右开区间
            n = n * 8 + ino[i] - '0';
        return n;
    }

    void work(int l) {
        int r = max(0, l - 4);
        int n = convert10(r, l);

        if (r) {
            work(r);
            printf("%03x", n);
        } else {
            printf("%x", n);
        }
    }

    int main() {
        ios::sync_with_stdio(false);
        cin >> ino;
        work(strlen(ino));
        return 0;
    }
}

int main() {
    return Solution::main();
}
