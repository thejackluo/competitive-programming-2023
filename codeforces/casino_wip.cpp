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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("casino.in", "r", stdin);
    // freopen("casino.out", "w", stdout);

    // input
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        // create a 2d array for cards with n rows and m columns
        int cards[n][m];

        // input the cards
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> cards[j][k];
            }
        }

        // create a transposed array for cards with m rows and n columns
        int transposed_cards[m][n];

        // transpose the cards
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                transposed_cards[k][j] = cards[j][k];
            }
        }

        // create a sum variable
        int sum = 0;

        // sort the cards for each row
        for (int j = 0; j < m; j++) {
            sort(transposed_cards[j], transposed_cards[j] + n);
        }
  
        // // print the transposed cards out
        // for (int j = 0; j < m; j++) {
        //     for (int k = 0; k < n; k++) {
        //         cerr << transposed_cards[j][k] << " ";
        //     }
        //     cerr << endl;
        // }

        // calculate the sum (since we are starting with the smallest number, it will be negative n-1 times and positive 0 times, we will increment positive and decrement negative as we iterate through the loop and repeat for each row)
        for (int j = 0; j < m; j++) {
            int negative = n - 1;
            int positive = 0;

            for (int k = 0; k < n; k++) {
                sum += (transposed_cards[j][k] * (positive - negative));
                negative--;
                positive++;
            }
        }

        // output
        cout << sum << endl;
    }

}