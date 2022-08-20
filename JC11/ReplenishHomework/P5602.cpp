#include <iostream>
#include <iomanip>
#include <algorithm>

namespace programNamespace {
	unsigned long long n, sum, ans;
	unsigned long long a[1000000005];
	double ans;

	int main() {
		ios::sync_with_stdio(false);
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1);

		for (int i = n; i >= 1; i--) {
			sum += a[i];
			ans = max(ans, sum * sum * 1.0);
		}
		cout << fixed << setprecision(8) << ans << endl;
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
