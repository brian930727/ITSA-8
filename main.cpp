#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    cin >> num;

    // 特判小於 2 的情況
    if (num < 2) {
        isPrime = false;
    }
    // 用迴圈判斷是否為質數
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    // 根據 isPrime 的值輸出結果
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
