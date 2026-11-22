#include <bits/stdc++.h>
using namespace std;

int main() {
	/* 	代码应该对任何长于8bit的数据都能工作。
	B. 除了x的最低有效字节，，其他的位都取补，最低有效字节保持不变。
	C. x的最低有效字节设置为全1，其他字节保持不变。*/
	int x = 0x87654321;
	int a = 0xFF & x;// A
	
	printf("0x%.8x\n", a);
	
	int b = ;
	printf("0x%.8x\n", b);

	return 0;
}
