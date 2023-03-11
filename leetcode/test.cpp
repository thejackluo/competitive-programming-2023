#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    vector<int> nums = {10,9,2,5,3,7,101,18};

    // algorithm

    // find the length of nums: O(N)
    int n = nums.size();

    // create two pointers on opposite ends of the vector to find the longest increasing subsequence: O(N)
    int i = 0;
    int j = n - 1;

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
        if (nums[j] < nums[j - 1]) {
            j--;
        } else {
            break;
        }
    }

    // print to err what the subsequence is from i to j
    for (int k = i; k < j; k++) {
        cerr << nums[k] << " ";
    }

    // interate through the sequence and find the longest increasing subsequence by keeping track of whether the sequence is increasing using a temp to keep track of each number
    int temp = nums[i];
    int count = 1;

    for (int k = i + 1; k < j; k++) {
        if (nums[k] > temp) {
            count++;
            temp = nums[k];
        }
    }

    // output
    cout << count << endl;


    return 0;
}
