#include <bits/stdc++.h>

namespace Solution
{
    using namespace std;
    unsigned long long n, price;
    stack<unsigned long long> s;

    int main()
    {
        cin >> n;
        while (n--)
        {
            unsigned long long x;
            price = 0;
            cin >> x;
            if (x == 1)
            {
                unsigned long long l, r;
                cin >> l >> r;
                for (unsigned long long i = l; i <= r; i++)
                {
                    s.push(i);
                }
            }
            if (x == 2)
            {
                unsigned long long k;
                cin >> k;
                for (unsigned long long i = 1; i <= k; i++)
                {
                    price += s.top();
                    s.pop();
                }
                cout << price << endl;
            }
        }
        return 0;
    }
}

int main() {
    return Solution::main();
}
