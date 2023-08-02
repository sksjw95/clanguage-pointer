#include<stdio.h>
void main() {
	short birthday;
	short* ptr; // 포인터 변수 선언
	ptr = &birthday; // birthday 변수의 주소를 ptr에 할당

	// %p는 메모리의 주소를 16진수 형태로 출력
	printf("birthday 변수의 주소는 %p 입니다.\n", ptr);


}