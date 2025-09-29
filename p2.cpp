#include<iostream>
using namespace std;

int main() {
    int n = 6;     // number of terms
    int a = 0, b = 1, c;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
