#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // files
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
    
    // input
    int n;
    cin >> n;

    // input n lines of numbers that could be 0 to 1,000,000 PASS
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // algorithm

    // create prefix sum array
    int prefix[n];
    prefix[0] = a[0]; // initialize first element
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i]; // prefix[i] = prefix[i - 1] + a[i]
    }

    // now we have prefix array, now we need to process all the queries in O(n log n) or faster
    int max = 0;
    int max_length = 0;

    // using the prefix sum array, we only need to process queries until we hit a number that is 
    // divisible by 7 (so we start from the first and last element and iterate the first element 
    // until we hit a number that is divisible by 7, and also do the same with the last) 


    cout << max_length << endl;

    // output
    return 0;
}
