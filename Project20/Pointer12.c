#include<stdio.h>
void main() {
	int data = 0;
	void* p;
	p = &data;
	/*  p* = 5;
	printf("%04X", data);*/
	printf("%p", p);
}
// void * �� ������ : ����� �ּҰ��� �о�ü� �ִ�. ������ �ش� �ּҿ� ������ ���� �о� ���ų� �ּҰ��� ���� ���� �Ҽ��� ����. 