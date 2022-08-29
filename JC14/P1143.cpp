#include <bits/stdc++.h>

namespace Solution {
    std::string ino;
    int on, nn;

    int convert10(std::string num, int x) {
        int n = 0, s = 1;
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] <= 'F' && num[i] >= 'A') {
                n += (num[i] - 'A' + 10) * s;
                s *= x;
            } else {
                n += (num[i] - '0') * s;
                s *= x;
            }
        }
        return n;
    }

    void output(std::stack<int> s) {
        while (!s.empty()) {
            if (s.top() < 10)
                std::cout << s.top();
            else if (s.top() >= 10)
                std::cout << (char) (s.top() + 'A' - 10);
            s.pop();
        }
        std::cout << std::endl;
    }

    void input() {
        std::cin >> on;
        std::cin >> ino;
        std::cin >> nn;
    }

    void work(int n, int x) {
        std::stack<int> s;
        while (n > 0) {
            s.push(n % x);
            n /= x;
        }
        output(s);
    }

    int main() {
        std::ios::sync_with_stdio(false);
        input();
        int n = convert10(ino, on);
        int lenn = ino.length();
        work(n, nn);
        return 0;
    }
}

int main() {
    return Solution::main();
}
