#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int candidato = nums[0], contador = 0;
    for (int i = 0; i < n; i++) {
        if (contador == 0) {
            candidato = nums[i];
        }

        if (nums[i] == candidato) {
            contador++;
        } else {
            contador--;
        }
    }

    cout << candidato << endl;
    return 0;
}