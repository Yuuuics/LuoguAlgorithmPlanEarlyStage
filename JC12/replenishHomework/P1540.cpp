#include <iostream>
#include <algorithm>
#include <vector>

namespace Solution
{
    using namespace std;
    int m, n, x, ans;
    int main()
    {
        cin >> m >> n;
        vector<int> v; // 用来表示内存
        while (cin >> x)
        {
            if (find(v.begin(), v.end(), x) == v.end())     // 不在 Container 中
            {
                v.push_back(x);
                ++ans;
            }
            if (v.size() > m)       // memory 溢出
                v.erase(v.begin());
        }
        cout << ans << endl;
        return 0;
    }
}

int main() {
    return Solution::main();
}
