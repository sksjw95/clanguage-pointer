#include<stdio.h>
void main() {
	int data = 0x12345678, i;
	char* p = (char*)&data;
	for (i = 0; i < 4; i++) {
		printf("%X, ", *(p+i));// p의 주소값을 변경하는 것이 아니라 data변수값을 1바이트씩 출력
		
	}

}