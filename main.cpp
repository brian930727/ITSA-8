#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    cin >> num;

    // �S�P�p�� 2 �����p
    if (num < 2) {
        isPrime = false;
    }
    // �ΰj��P�_�O�_�����
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    // �ھ� isPrime ���ȿ�X���G
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
