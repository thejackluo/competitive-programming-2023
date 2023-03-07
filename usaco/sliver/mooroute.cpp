/*
Farmer Nhoj dropped Bessie in the middle of nowhere! At time t=0
, Bessie is located at x=0
 on an infinite number line. She frantically searches for an exit by moving left or right by 1
 unit each second. However, there actually is no exit and after T
 seconds, Bessie is back at x=0
, tired and resigned.

Farmer Nhoj tries to track Bessie but only knows how many times Bessie crosses x=.5,1.5,2.5,…,(N−1).5
, given by an array A0,A1,…,AN−1
 (1≤N≤105
, 1≤Ai≤106
, ∑Ai≤106
). Bessie never reaches x>N
 nor x<0
.

In particular, Bessie's route can be represented by a string of T=∑N−1i=0Ai
 L
s and R
s where the i
th character represents the direction Bessie moves in during the i
th second. The number of direction changes is defined as the number of occurrences of LR
s plus the number of occurrences of RL
s.

Please help Farmer Nhoj find any route Bessie could have taken that is consistent with A
 and minimizes the number of direction changes. It is guaranteed that there is at least one valid route.

INPUT FORMAT (input arrives from the terminal / stdin):
The first line contains N
. The second line contains A0,A1,…,AN−1
.
OUTPUT FORMAT (print output to the terminal / stdout):
Output a string S
 of length T=∑N−1i=0Ai
 where Si
 is L
 or R
, indicating the direction Bessie travels in during second i
. If there are multiple routes minimizing the number of direction changes, output any.
SAMPLE INPUT:
2
2 4
SAMPLE OUTPUT:
RRLRLL
There is only 1 valid route, corresponding to the route 0→1→2→1→2→1→0
. Since this is the only possible route, it also has the minimum number of direction changes.

SAMPLE INPUT:
3
2 4 4
SAMPLE OUTPUT:
RRRLLRRLLL
There are 3 possible routes:

RRLRRLRLLL
RRRLRLLRLL
RRRLLRRLLL
The first two routes have 5 direction changes, while the last one has only 3. Thus the last route is the only correct output.

SCORING:
Inputs 3-5: N≤2added
Inputs 3-10: T=A0+A1+⋯+AN−1≤5000
Inputs 11-20: No additional constraints.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // files
    // freopen("mooroute.in", "r", stdin);
    // freopen("mooroute.out", "w", stdout);

    // input
    int n;
    string s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // algorithm
    
    // output
    cout << s << endl;

    return 0;
}