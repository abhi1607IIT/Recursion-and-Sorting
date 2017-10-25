#include <iostream>
using namespace std;

void print(int a[][100], int m, int n) {
	cout << a[1][2] << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int b[10];
	int a1[10][20];
	cout << b[3] << endl;
	cout << a1[2][5] << endl;

	int a[100][100];
	int m,n;
	cout << "Enter num of rows and columns" << endl;
	cin >> m >>n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	print(a, m, n);	











}


