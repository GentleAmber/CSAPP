#include <bits/stdc++.h>
using namespace std;

void inplace_swap(int *x, int *y) {
	*y = *x^*y;
	*x = *x^*y;
	*y = *x^*y;
}

void reverse_arr(int a[], int cnt) {
	int first, last;
	for (first = 0, last = cnt - 1;
	first < last; first++, last--) {
		inplace_swap(&a[first], &a[last]);
	}
}

int main() {
	int a[4] = {1,2,3,4};
	reverse_arr(a, 4);
	for (int i = 0; i < 4; i++) {
		cout << a[i];
	}
	return 0;
}
