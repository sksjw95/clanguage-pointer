#include<stdio.h>
void main() {
	short birthday;
	short* ptr; // ������ ���� ����
	ptr = &birthday; // birthday ������ �ּҸ� ptr�� �Ҵ�

	// %p�� �޸��� �ּҸ� 16���� ���·� ���
	printf("birthday ������ �ּҴ� %p �Դϴ�.\n", ptr);


}