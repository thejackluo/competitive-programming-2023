#include <bits/stdc++.h>
using namespace std;

// defines

// not working
#define str string;

class Solution {
public:
    string word(int num) {
        string output;

        // define all single digit words in an array
        string singleDigit[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        // define all double digit words in an array
        string doubleDigit[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        // define all double digit words in an array
        string doubleDigit2[10] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        // define all triple digit words in an array
        string tripleDigit[10] = {"Hundred", "Thousand", "Million", "Billion"};

        // find the length of the number
        int length = to_string(num).length();
        
        // define a switch case for each category of numbers
        switch (num) {
            case 1:
                output = singleDigit[num];
                break;
            case 2:
                output = doubleDigit[num];
                break;
            case 3:
                output = doubleDigit2[num];
                break;
            case 4:
                output = tripleDigit[num];
                break;
            default:
                break;
        }

        return output;
    }
};