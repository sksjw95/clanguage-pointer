#include<stdio.h>

void main() {
	short birthday;
	short* ptr;
	ptr = &birthday; // birthday 변수의 주소를  ptr에 대입
	*ptr = 0x0412; // birthday = 0x0412;와 같은 결과

	printf("birthday = %d (0x%04x)\n", birthday, birthday);

}