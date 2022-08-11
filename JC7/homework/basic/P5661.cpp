#include <iostream>
#include <vector>

namespace programNamespace {
    struct node {
        int price{}, time{};
        node(int price = 0, int time = 0) : price(price), time(time) {};
    };
    std::vector<node> tickets;
    int n;

    int main() {
        std::ios::sync_with_stdio(false);
        std::cin >> n;
        unsigned long long cost = 0;
        for (int i = 1; i <= n; i++) {
            int pw, pp, pt;
            std::cin >> pw >> pp >> pt;
            if (pw == 0) {     // 坐地铁
                tickets.emplace_back(pp, pt);       // 添加优惠券与price
                cost += pp;
            } else {
                bool flag = false;
                for (auto i = 0; i < tickets.size(); i++) {
                    if (pt - tickets[i].time > 45)      // 失效删除
                        tickets.erase(tickets.begin()), i--;
                    else if (tickets[i].price >= pp) {  // 优惠卷可用
                        tickets.erase(tickets.begin() + i); // 用完删除
                        flag = true;
                        break;
                    }
                }
                if (!flag) cost += pp;  // 没有优惠券，老老实实买原价
            }
        }
        std::cout << cost << std::endl;
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
