#include<iostream>
using namespace std;
int x, n, a;
bool f[100000];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		f[x] = 1;
	}
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> x;
		if (f[x]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
