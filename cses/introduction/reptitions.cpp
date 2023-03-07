#include <bits/stdc++.h>
#include <ostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Define data types
    string dna;
    cin >> dna;

    // Max num
    int max = 0;
    int actualMax = 0;
    char current;

    for (int i = i; i < dna.length(); i++) {
        if (current != dna[i]) {
            // cerr << "Mismatch " << current << " and " << dna[i] << endl;
            // cerr << "Max " << max;
            current = dna[i];
            max = 0;
        } else {
            // cerr << "Match " << current << " and " << dna[i] << endl;
            // cerr << "Max " << max;
            max++;
        }
        actualMax = std::max(max, actualMax);
    }

    actualMax++;
    cout << actualMax;
    return 0;
}
