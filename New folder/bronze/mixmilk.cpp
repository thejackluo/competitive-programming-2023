#include <bits/stdc++.h>
using namespace std;

int main() {
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // files
    freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

    // input
    int capacityOne, capacityTwo, capacityThree;
    int amountOne, amountTwo, amountThree;

    cin >> capacityOne >> amountOne;
    cin >> capacityTwo >> amountTwo;
    cin >> capacityThree >> amountThree;

    // algorithm
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0) {
            int pour = min(amountOne, capacityTwo - amountTwo);
            amountOne -= pour;
            amountTwo += pour;
        } else if (i % 3 == 1) {
            int pour = min(amountTwo, capacityThree - amountThree);
            amountTwo -= pour;
            amountThree += pour;
        } else {
            int pour = min(amountThree, capacityOne - amountOne);
            amountThree -= pour;
            amountOne += pour;
        }
    }

    // output
    cout << amountOne << endl;
    cout << amountTwo << endl;
    cout << amountThree << endl;

    return 0;
}
