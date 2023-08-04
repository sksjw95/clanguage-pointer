// 간접 주소 지정 방식
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
// 매개변수로 다른 함수의 변수 주소 받기