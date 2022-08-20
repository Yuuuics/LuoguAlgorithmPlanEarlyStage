#include <iostream>
#include <algorithm>
#include <vector>

namespace programNamespace {
	using namespace std;
	int n, k, tmpn;
	char tmpc;
	vector<int> v;
	vector<int> ::iterator It;

	int main() {
		ios::sync_with_stdio(false);
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> tmpc;
			tmpn = tmpc - '0';		// char转int
			if (k != 0) {
				while (k != 0 && !v.empty() && tmpn > v.back()) {		// 输入数字大
					v.pop_back();
					k--;
				}
				v.push_back(tmpn);
			} else v.push_back(tmpn);
		}
		while (k != 0 && !v.empty()) {
			v.pop_back();
			k--;
		}
		for (It = v.begin(); It != v.end(); It++)
			cout << *It;
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
