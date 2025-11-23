#include <iostream>
using namespace std;

// 递归爬楼梯函数
int climb(int n) {
    // 基础情况
    if (n == 1) {
        return 1;  // 只有1阶：1种方法
    }
    else if (n == 2) {
        return 2;  // 只有2阶：2种方法 (1+1, 2)
    }
    // 递归情况：从n-1阶爬1阶，或从n-2阶爬2阶
    else {
        return climb(n - 1) + climb(n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << climb(n) << endl;
    return 0;
}
