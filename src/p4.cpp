#include <iostream>
using namespace std;

// McCarthy 91 递归函数
int f91(int n) {
    if (n >= 101) {
        return n - 10;  // 基础情况：n ≥ 101
    }
    else {
        // 递归情况：n ≤ 100，f91(n) = f91(f91(n+11))
        return f91(f91(n + 11));
    }
}

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break;  // 题目说输入是正整数，但有些版本用0表示结束
        cout << "f91(" << N << ") = " << f91(N) << endl;
    }
    return 0;
}
