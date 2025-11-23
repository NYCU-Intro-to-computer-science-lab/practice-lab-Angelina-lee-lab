#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 1) return 1;       // Base case
    return n + sum(n - 1);      // Recursive case
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
