#include <iostream>
using namespace std;

// دالة لحساب العامليّة
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    cin >> N;  // قراءة عدد صحيح من المستخدم

    // التحقق من القيود
    if (N < 1 || N > 10) {
        cout << "العدد يجب أن يكون بين 1 و 10" << endl;
        return 1;
    }

    // حساب العامليّة وطباعتها
    cout << factorial(N) << endl;

    return 0;
}
