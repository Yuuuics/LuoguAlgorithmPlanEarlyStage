#include <iostream>
#include <string>
#include <cstring>

namespace Solution {
    int n, score, maxScore = -10000;
    int letters[30];
    std::string s;

    int main() {
        std::ios::sync_with_stdio(false);
        std::cin >> n;
        while (n--) {
            std::cin >> s;
            for (int i = 0; i <= s.size(); i++) {
                letters[s[i] - '0']++;
                if (letters[s[i]] > maxScore)
                    maxScore = letters[s[i] - '0'];
            }
            memset(letters, 0, sizeof(letters));
        }
        std::cout << maxScore << std::endl;
        return 0;
    }
}

int main(int args, char *argv[]) {
    return Solution::main();
}
