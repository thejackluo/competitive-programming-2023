#include <iostream>
#include <vector>
using namespace std;

int main() {
	long input;
	cin >> input;
	cout << input << " ";
	while (input != 1) {
		if (input % 2 == 0) {
			input /= 2;
			cout << input << " ";
		} else {
			input = input * 3 + 1;
			cout << input << " ";
            cerr << "this line is debugging";
		}
	}
	return 0;


}
