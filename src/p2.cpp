#include <iostream>
using namespace std;

// 递归求和函数
int sum(int n) {
    // 基础情况：当 n = 1 时，返回 1
    if (n == 1) {
        return 1;
    }
    // 递归情况：sum(n) = n + sum(n-1)
    else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
