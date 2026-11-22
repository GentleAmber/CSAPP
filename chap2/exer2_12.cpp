#include <bits/stdc++.h>
using namespace std;

int main() {
	/* 	代码应该对任何长于8bit的数据都能工作。
	B. 除了x的最低有效字节，其他的位都取补，最低有效字节保持不变。
	C. x的最低有效字节设置为全1，其他字节保持不变。*/
	int x = 0x87654321;
	int a = 0xFF & x;// A
	
	printf("0x%.8x\n", a);
	
	int b = ~0xFF ^ x;// B
	printf("0x%.8x\n", b);
	
	/** 
	* x先右移8位，再左移8位，这样把最后8位置0，结果存入x1
	* x1再和0xFF或运算
	*/
	int c = (x >> 8 << 8) | 0xFF;
	printf("0x%.8x\n", c);

	return 0;
}
