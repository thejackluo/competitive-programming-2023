#include <iostream>
using namespace std;

int main() {
	/* You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

Input

The first input line contains an integer n
.

The second line contains n−1
 numbers. Each number is distinct and between 1
 and n
 (inclusive).

Output

Print the missing number.*/

    int n;    
    cin >> n;

    int numbers[n];

    // Read in the numbers
    for (int i = 0; i < n - 1; i++) {
        cin >> numbers[i];
    }

    // Sort the numbers
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Find the missing number
    for (int i = 0; i < n - 1; i++) {
        if (numbers[i] != i + 1) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}
