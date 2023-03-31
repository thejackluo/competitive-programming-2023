// let's take 1, 7, 3
// then 7-1 + 7-3 + 3-1 = 12
//
// there is a pattern that you can see here
// 7 + 7 + 3 - 1 - 1 - 3 = 12 (larger cards are positive more often than smaller cards)
// each cards are played n - 1 times (7 is played 2 times, 3 is played 2 times as well and 1 is played 2 times)
// assuming that the cards are different and sorted, the largest card is positive n-1 times, the second largest card is positive n-2 times, and so on
// the smallest card is always negative
// assuming that the cards are the same let's take 1, 1, 1
// then 1-1 + 1-1 + 1-1 = 0
// we take one more example 1, 3, 1, 4 (assume that the cards are different and sorted)
// then 4-1 + 4-3 + 4-1 + 3-1 + 3-1 + 1-1 = 10

#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // files
    freopen("casino.in", "r", stdin);
    freopen("casino.out", "w", stdout);

    // input
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cerr << "i: " << i << endl;
    }

}