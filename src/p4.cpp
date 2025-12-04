#include <iostream>
using namespace std;

// McCarthy 91 函數
int f91(int n) {
    if (n >= 101)                  // base case 1: n >= 101，直接回傳 n - 10
        return n - 10;
    else                           // n <= 100
        return f91(f91(n + 11));   // 遞迴呼叫兩次
}

int main() {
    int n;
    cin >> n;                     // 讀入正整數 n
    cout << f91(n) << endl;       // 呼叫 f91 函數並輸出結果
    return 0;
}

