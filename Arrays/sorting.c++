#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;  // No need to write std:: before standard functions

int main() {
    vector<int> nums = {5, 1, 8, 3, 7, 2, 4, 6};
    int n = nums.size();

    cout << "Unsorted Vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sort(nums.begin(), nums.end() , greater<int>());

    cout << "Sorted Vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
