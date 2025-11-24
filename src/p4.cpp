#include <iostream>
#include <cstdio> // 為了使用 scanf/printf

/**
 * @brief McCarthy 91 遞迴函數
 * * 根據定義：
 * 1. 如果 N >= 101，則 f91(N) = N - 10
 * 2. 如果 N <= 100，則 f91(N) = f91(f91(N + 11))
 * * 該函數的有趣性質是：
 * - 當 N <= 100 時，回傳值恆為 91。
 * - 當 N >= 101 時，回傳值恆為 N - 10。
 * * @param n 輸入的正整數 N (1 <= N <= 1000000)
 * @return f91(N) 的值
 */
int f91(int n) {
    // 基礎情況 (Base Case 1): N >= 101
    // 根據定義，此時直接回傳 N - 10
    if (n >= 101) {
        return n - 10;
    }
    
    // 遞迴情況 (Recursive Case): N <= 100
    // 根據定義，遞迴呼叫 f91(f91(N + 11))
    // 由於我們不能使用迴圈，這個遞迴調用會持續進行，直到內層的參數大於等於 101
    // 最終，對於所有 N <= 100，這個函數都會收斂到 91。
    return f91(f91(n + 11));
}

int main() {
    // 由於輸入 N 的範圍很大 (10^6)，使用 scanf/printf 可能比 cin/cout 略快，
    // 但在這個情境下，對於單個輸入，速度差異不大。
    int N;
    // 使用 C-style I/O 讀取輸入
    if (scanf("%d", &N) != 1) {
        return 1; // 處理輸入錯誤
    }
    
    // 呼叫遞迴函數並輸出結果
    int result = f91(N);
    
    // 使用 C-style I/O 輸出結果
    printf("%d\n", result);
    
    return 0;
}
