#include<stdio.h>
void main() {
	// int * const p; 
	/*int data = 5, temp = 0;
	int* const p = &data;
	*p = 3;
	p = &temp;*/
	// p = &data(p�� data�� �ּҰ��� �����ض�); 
	// �׸��� p�տ� const �Է��Ͽ� p�� ���ȭ �ȴ�.

	// const int * p
	/*int data = 5;
	const int* p = &data;
	*p = 3;*/
	// *p = 3 ;(�Ҵ�� �ּҰ��� �ش簪�� �����϶�� �ǹ��̴�.) const int *p ->�Ҵ�� ���� �ٲ��� ����!!

	// const int * const p;
	int data = 5, temp = 0;
	const int* const p = &data;
	*p = 3;
	p = &temp;
	// const int * const p -> �Ҵ�� ���� �ּҰ� ��� ���ȭ�� ��
}