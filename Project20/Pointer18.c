#include<stdio.h>
void Test(int* p) {

	*p = 5;
}

void main() {
	int tips = 0;
	Test(&tips);
}
