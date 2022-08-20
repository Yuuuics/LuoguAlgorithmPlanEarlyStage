#include <cstdio>
#include <algorithm>

namespace programNamespace {
	long long n, s, c, y, last, ans;

	int main() {
		scanf("%lld %lld", &n, &s);
		for (int i = 1; i <= n; i++) {
			scanf("%lld %lld", &c, &y);
			if (i == 1) last = c;
			else last = std::min(last + s, c);
			ans += last * y;
		}
		printf("%lld\n", ans);
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
