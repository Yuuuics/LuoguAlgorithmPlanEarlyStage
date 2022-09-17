#include <iostream>
#include <vector>

namespace Solution {
	int n, tmp;
	std::vector<int> deck;

	int main() {
		std::ios::sync_with_stdio(false);
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> tmp;
			deck.push_back(tmp);
		}

		for (std::vector<int>::iterator i = deck.begin(); i < deck.end(); i++) {
			if (*i % 2 == 0) continue;
			else {
				std::cout << *i << " ";
				deck.erase(i);
			}
		}

		for (std::vector<int>::iterator i = deck.begin(); i < deck.end(); i++)
			std::cout << *i << " ";
		std::cout << std::endl;
		return 0;
	}
}

int main() {
	return Solution::main();
}
