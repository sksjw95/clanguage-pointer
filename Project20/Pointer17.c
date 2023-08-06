#include<stdio.h>

void main() {
	/*int data = 0x12345678;
	void* p_data = &data;
	*(short*)p_data = 0x0412;
	printf("%X", data);*/
	int data = 0x12345678;
	short* p = (short*)&data;
	*p = 0x0412;
	printf("%X", data);

}