#include <iostream>
using namespace std;

// 计算两数之和
int add(int a, int b) {
    return a + b;
}

// 计算两数之差
int sub(int a, int b) {
    return a - b;
}

int main() {
    cout << "Hello, Git!" << endl;
    cout << "1 + 2 = " << add(1, 2) << endl;
    cout << "5 - 3 = " << sub(5, 3) << endl;
    return 0;
}
