#include<stdio.h>
void main() {
	int data = 0;
	void* p;
	p = &data;
	/*  p* = 5;
	printf("%04X", data);*/
	printf("%p", p);
}
// void * 형 포인터 : 저장된 주소값을 읽어올수 있다. 하지만 해당 주소에 지정된 값을 읽어 오거나 주소값에 값을 대입 할수는 없다. 