#include <iostream>
using namespace std;

int sum(int n) {
    // 遞迴終止條件
    if (n == 1) {
        return 1;
    }
    // 遞迴關係：sum(n) = n + sum(n-1)
    return n + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
