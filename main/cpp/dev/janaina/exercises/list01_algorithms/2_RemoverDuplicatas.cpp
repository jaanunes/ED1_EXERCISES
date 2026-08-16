#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int k = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }

    cout << k + 1 << endl;
    for (int i = 0; i <= k; i++) cout << nums[i] << (i < k ? " " : "\n");
    return 0;
}
