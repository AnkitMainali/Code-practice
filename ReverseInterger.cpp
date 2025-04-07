#include <iostream>
using namespace std;
int missingNumber(int nums[], int n) {
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; ++i) {
        actual_sum += nums[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int nums[] = {3, 0, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);  // Number of elements in the array
    int missingNumber(nums[],n);
    cout << "The missing number is: " << missingNumber(nums, n); 
    return 0;
}
