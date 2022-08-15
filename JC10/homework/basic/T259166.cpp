#include <cstdio>
#include <algorithm>

namespace programNamespace {
	int n, m;

	int main() {
		scanf("%d", &n);
		scanf("%d", &m);
		int a[n + 1];
		for (int i = 1; i <= n; i++)
			scanf("%d", &a[i]);
		for (int i = 1; i <= m; i++)
			std::next_permutation(a + 1, a + n + 1);
		for (int i = 1; i <= n; i++)
			printf("%d ", a[i]);
		puts("");
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
