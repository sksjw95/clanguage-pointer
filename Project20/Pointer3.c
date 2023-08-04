// 직접 주소 지정 방식으로 다른 함수에 선언한 변수 사용하기
#include<stdio.h>
void Test(short data) {
	short soft = 0;
	soft = data;
}
void main() {
	short tips = 5;
	Test(tips);
}
// 하지만 Test()함수에서 tips 변수 값을 수정할 수는 없다.
// 왜냐면 매개변수가 대상 변수의 주소가 아니라 변수가 가지고 있는 값을 넘겨받았기 때문에