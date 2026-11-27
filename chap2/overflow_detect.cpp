#include <bits/stdc++.h>
using namespace std;

int uadd_ok(unsigned x, unsigned y){
	if (x+y<x || x+y<y) {
		return 0;
	} else {
		return 1;
	}
}

int tadd_ok(int x, int y) {
	if (x > 0 && y > 0 && x+y < 0) {
		return 0;
	}
	if (x < 0 && y < 0 && x+y > 0) {
		return 0;
	}
	return 1;
}

int main() {
	cout << "uadd_ok:" << endl;
	cout << uadd_ok(4200000000,1200000000) << endl; // 0
	cout << uadd_ok(1,0) << endl; // 1
	cout << uadd_ok(0,0) << endl; // 1
	
	cout << "tadd_ok:" << endl;
	cout << tadd_ok(-2100000000, -200000000) << endl; // 0
	cout << tadd_ok(2100000000, 200000000) << endl; // 0
	cout << tadd_ok(2100000000, -200000000) << endl; // 1
	

	return 0;
}
