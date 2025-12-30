#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Brute-force approach: Find maximum subarray sum
    for (int st = 0; st < size; st++) {
        int currentSum = 0; 

        for (int end = st; end < size; end++) {
            currentSum += arr[end]; 
            maxSum = max(currentSum, maxSum); 
        }
    }

    cout << "The max sum of the subarray: " << maxSum << endl;

    return 0; 
}
