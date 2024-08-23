#include <iostream>
#include <vector>
#include <algorithm>  // For sort function

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());  // Sort the vector in ascending order
    int n = nums.size();
    return nums[n - k];  // Return the k-th largest element
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int kthLargest = findKthLargest(nums, k);
    cout << "The " << k << "-th largest element is: " << kthLargest << endl;

    return 0;
}

