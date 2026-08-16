#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool ddmm_valida = (b >= 1 && b <= 12);
    bool mmdd_valida = (a >= 1 && a <= 12);

    if (ddmm_valida && mmdd_valida && a != b) {
        cout << "DATA INCERTA" << endl;
    } else {
        cout << "DATA SEGURA" << endl;
    }

    return 0;
}