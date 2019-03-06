#include <iostream>
using namespace std;

#define MAX_SIZE 1001

void isPrime(int n) {
	bool prime[MAX_SIZE];
	for (int i = 1; i < MAX_SIZE; ++i) {
		prime[i] = true;
	}
	for (int j = 2; (j*j) <= n; ++j) {
		if (prime[j] == true) {
			for (int k = j * 2; k <= n; k += j) {
				prime[k] = false;
			}
		}
	}
	for (int l = 2; l <= n; ++l) {
		if (prime[l] == true) {
			cout << l << " ";
		}
	}
	cout << endl;
}

int main() {
	isPrime(MAX_SIZE);
	return 0;
}
