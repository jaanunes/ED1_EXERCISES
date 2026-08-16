#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }
    for (int i = k; i < n; i++) nums[i] = 0;

    for (int i = 0; i < n; i++) cout << nums[i] << (i < n-1 ? " " : "\n");
    return 0;
}