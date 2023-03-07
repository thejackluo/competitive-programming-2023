#include <bits/stdc++.h>
using namespace std;

int main() {
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // files
    // freopen("blocks.in", "r", stdin);
    // freopen("blocks.out", "w", stdout);

    // input
    int n;
    cin >> n;

    string blocks[n][2];
    for (int i = 0; i < n; i++) {
        cin >> blocks[i][0] >> blocks[i][1];
    }

    // generate all possible bit string of length n and store in array of length n
    string bitStrings[n];
    string temp;
    for (int i = 0; i < (1 << n); i++) {
        temp = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                temp += "1";
            } else {
                temp += "0";
            }
        }
        bitStrings[i] = temp;
    }

    // print to cerr all bitstrings
    for (int i = 0; i < (1 << n); i++) {
        cerr << bitStrings[i] << endl;
    }

    // algorithm
    for (int i = 0; i < n; i++) {
        cin >> blocks[i][0] >> blocks[i][1];
    }
        

    // initialize alphabet array
    int count[26] = {0};

    // output
    for (int i = 0; i < 26; i++) {
        cout << count[i] << endl;
    }

    // testing
    for (int i = 0; i < n; i++) {
        cerr << blocks[i][0] << " " << blocks[i][1];
    }

    return 0;
}
