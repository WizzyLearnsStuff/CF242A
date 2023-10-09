#include<iostream>

using namespace std;

int main() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;

	if (a < b) a = b + 1;
	if (y > x) y = x - 1;
	// a > b
	if (x < a || b > y) {
		cout << 0;
		return 0;
	}

	int n = 0;

	for (int i = a; i <= x; i++) {
		for (int j = b; j < i && j <= y; j++) {
			n++;
		}
	}
	cout << n << '\n';

	for (int i = a; i <= x; i++) {
		for (int j = b; j < i && j <= y; j++) {
			cout << i << ' ' << j << '\n';
		}
	}
}
