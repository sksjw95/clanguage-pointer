#include<stdio.h>
void main() {
	int data = 0x12345678, i;
	char* p = (char*)&data;
	for (i = 0; i < 4; i++) {
		printf("%X, ", *(p+i));// p�� �ּҰ��� �����ϴ� ���� �ƴ϶� data�������� 1����Ʈ�� ���
		
	}

}