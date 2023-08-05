// 하지만 사용할 크기를 표시해 주면 일반 포인터처럼 사용할 수 있다.
#include<stdio.h>
void main() {
	int data = 0;
	void* p = &data;
	*(int *)p = 6;

	printf("%d", data);
}
// void *는 주소를 사용할 때 반드시 '사용할 크기'를 표시해야 한다.