#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = 98365;
	cout << (short) x << endl;
	
	cout << (unsigned)0 - 1;
	long long sum = 0;
	for (int i = 0; i < 32; i++){
		long long ind = 1;
		if (i > 0) {
			for (int j = 1; j <= i; j++) {
				ind *= 2;
			}
		}
		sum += ind;
		
	}
	
	cout << endl << sum;

	return 0;
}

