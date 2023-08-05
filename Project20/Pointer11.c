#include<stdio.h>
void main() {
	double data = 0x12345678;
	int i;
	char* p = (char*)&data;
	for (i = 0; i < 8; i++) {
		printf("%X, ", *p);
		p++;
	}
}