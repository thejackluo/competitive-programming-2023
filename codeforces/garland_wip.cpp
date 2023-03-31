#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // files
    freopen("garland.in", "r", stdin);
    freopen("garland.out", "w", stdout);

    // input
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string test;
        cin >> test;

        // algo

        /*
            step 1. sort the array using counting sort in O(n) and store the result in a new array
            step 2. if all the light bulbs are the same and there are more than 1 light bulb, then it is impossible to turn on all the light bulbs
            step 3. if there are different light bulbs, then we try to turn on all the light bulbs by checking the number of light bulbs.
            so we first find the min of all the elements and subtract the min from all the light bulbs from the counting sort.
            then we iterate to the next elemetn and try to find the min of the remaining elements and subtract the min from all the elements.
            we keep repeating this process until we have turned on all the light bulbs.

            Once there is only one light bulb with a number, we keep turning off and turning on one light bulb until we reach a state where all the light bulbs are turned on. 
        */
    
        // initialize 10 zeros
        vector<int> sorted_s (10, 0);

        // count the number of times each element appears in the array
        for (int i = 0; i < 4; i++) {
            int temp = (int) test[i] - 48;
            cerr << temp << endl;
            sorted_s[temp]++;
        }

        // print the sorted array
        cerr << "sorted_s: " << endl;
        for (int i = 0; i < 10; i++) {
            cerr << sorted_s[i] << " ";
        }

        // step 2
        int count = 0;
        int light_bulb_type_left = 0;

        for (int i = 0; i < 10; i++) {
            if (sorted_s[i] > 0) {
                light_bulb_type_left++;
            }
        }

        if (light_bulb_type_left == 1 && sorted_s[0] > 1) {
            cout << -1 << endl;
            return 0;
        } else {
            while (light_bulb_type_left > 1) {
                // step 3: find min
                int min = 10001;
                for (int i = 0; i < 10; i++) {
                    if (sorted_s[i] > 0 && sorted_s[i] < min) {
                        min = i;
                    }
                }

                // subtract min from all the elements
                for (int i = 0; i < 10; i++) {
                    if (sorted_s[i] > 0) {
                        sorted_s[i] -= min;
                        count += min;
                    }
                }

                light_bulb_type_left = 0;
                for (int i = 0; i < 10; i++) {
                    if (sorted_s[i] > 0) {
                        light_bulb_type_left++;
                    }
                }
            }

            // step 4
            // find the only light bulb type left
            
            // check if the array is all zeros
            int light_bulb_type = -1;
            for (int i = 0; i < 10; i++) {
                if (sorted_s[i] > 0) {
                    light_bulb_type = i;
                }
            }

            if (light_bulb_type == -1) {
                cout << count << endl;
                return 0;
            } else {
                 // add two times the count of the light bulb type left
                count += 2 * sorted_s[light_bulb_type];
                cout << count << endl;
                return 0;
            }
            
        }
    }

}