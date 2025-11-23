#include <iostream>
using namespace std;

// 计算函数
int calculate(int opcode, int num1, int num2) {
    switch(opcode) {
        case 1:  // 加法
            return num1 + num2;
        case 2:  // 减法
            return num1 - num2;
        case 3:  // 乘法
            return num1 * num2;
        case 4:  // 除法
            return num1 / num2;
        default:
            return 0;  // 理论上不会执行到这里
    }
}

int main() {
    int opcode, num1, num2;
    
    // 持续读取直到 EOF
    while (cin >> opcode >> num1 >> num2) {
        int result = calculate(opcode, num1, num2);
        cout << result << endl;
    }
    
    return 0;
}
