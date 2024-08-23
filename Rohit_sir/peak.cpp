#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int>& nums)
 {
int n=nums.size();
int s=0;
if(n==0||n==1)
{
    return 0;
}
int e=n-1;
while(s<=e)
{
    int mid=(s+e)/2;
    if(mid==0)
    {
        if(nums[mid+1]<nums[mid])
        return mid;
        else
        return mid+1;
    }
    else if(mid==n-1)
    {
        if(nums[mid-1]<nums[mid])
        return mid;
        return mid-1;
    }
    else if(mid>0&&mid<n-1&&nums[mid-1]<nums[mid]&&nums[mid+1]<nums[mid])
    {
        return mid;
    }
    else if(mid-1>=0&&nums[mid-1]>nums[mid])
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return -1;
 }
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution solution;
    int peakIndex = findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;

    return 0;
}

