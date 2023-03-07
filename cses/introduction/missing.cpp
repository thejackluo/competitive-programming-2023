#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Define data types
    int n, t;
    cin >> n;

    bool middle = false;

    int numbers[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> numbers[i];
    }

    // Test input
    cerr << n;
    for (int i = 0; i < n - 1; i++) {
        cerr << numbers[i];
    }

    // Sort the numbers
    sort(numbers, numbers + n - 1);

    // Find the missing number
    for (int i = 0; i < n - 1; i++) {
        if (numbers[i] != i + 1) {
            cout << i + 1;
            middle = true;
            break;
        }
    }

    // edge case
    if (!middle) {
        cout << n;
    }

    return 0;
}
