#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    vector<int> nums = {0,1,0,3,2,3};

    // algorithm

    // find the length of nums: O(N)
    int n = nums.size();

    // create two pointers on opposite ends of the vector to find the longest increasing subsequence: O(N)
    int i = 0;
    int j = n-1;

    // move the pointer i to the right in the condition that the next number is smaller than the current number: O(N)
    while (i < n - 1) {
        if (nums[i] > nums[i + 1]) {
            i++;
        } else {
            break;
        }
    }

    // move the pointer j to the left in the condition that the next number is smaller than the current number: O(N)
    while (j > 0) {
        if (nums[j - 1] > nums[j]) {
            --j;
        } else {
            break;
        }
    }

    // bullshit
    j++;

    // interate through the sequence and find the longest increasing subsequence using dynamic programming
        

    // output
    cout << count << endl;


    return 0;
}
