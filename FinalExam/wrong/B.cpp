#include <cstdio>

namespace Solution {
	int n, t;
	int maxi, maxj;
	double maxs = - 99999, sum;
	
	int main() {
		scanf("%d %d", &n, &t);
		double a[n + 5];
		for (int i = 1; i <= n; i++)
			scanf("%lf", &a[i]);
		
		for (int i = 1; i <= n - t + 1; i++) {
			for (int j = i; j <= t; j++)
				sum += a[j];
			if (sum > maxs)
					maxi = i, maxj = i + t - 1, maxs = sum, sum = 0;
		}
		printf("%.1lf %d %d\n", maxs, maxi, maxj);
		return 0;
	}
}

int main() {
	return Solution::main();
}
