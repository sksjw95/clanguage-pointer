// ������ ����� ũ�⸦ ǥ���� �ָ� �Ϲ� ������ó�� ����� �� �ִ�.
#include<stdio.h>
void main() {
	int data = 0;
	void* p = &data;
	*(int *)p = 6;

	printf("%d", data);
}
// void *�� �ּҸ� ����� �� �ݵ�� '����� ũ��'�� ǥ���ؾ� �Ѵ�.