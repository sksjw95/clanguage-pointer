// ���� �ּ� ���� ���
#include <stdio.h>
void Test(short *ptr) {
	short soft = 0;
	soft = *ptr;
	*ptr = 3;
	
}

void main() {
	short tips = 5;
	Test(&tips);
}
// �Ű������� �ٸ� �Լ��� ���� �ּ� �ޱ�