#include <iostream>
using namespace std;

int towers(int n, char a, char b, char c) {
	if (n == 1) {
		cout << "Move 1st disk from " << a << " to " << c << endl;
		return 1;
	}
	int ans;
	ans  = towers(n - 1, a, c, b);
	cout << "Move " << n << "th disk from " << a << " to " << c << endl;
	ans = ans + 1;
	ans = ans + towers(n - 1, b, a, c);
	return ans;
}

int main() {
	cout << towers(10, 'a', 'b', 'c');
}

