#include <iostream>
#include <vector>

namespace programNamespace {
    using namespace std;
    int n, m, x, y, opr;
	vector<int>::iterator itor;

    int main() {
        ios::sync_with_stdio(false);
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        while (m--) {
            cin >> opr;
            if (opr == 1) {
                cin >> x >> y;
                a.insert(a.begin() + x, y);
                for (itor = a.begin(); itor < a.end(); itor++)
                    cout << *itor << " ";
                cout << endl;
            }
            if (opr == 2) {
                cin >> x;
                a.erase(a.begin() + x - 1);
                for (itor = a.begin(); itor < a.end(); itor++)
                    cout << *itor << " ";
                cout << endl;
            }
        }
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
