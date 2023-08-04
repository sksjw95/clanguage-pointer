// 직접 주소 지정 방식으로 변수 값 교환하기
#include<stdio.h>
// temp 변수를 이용하여 a와 b의 값을 서로 바꾸는 함수
void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void main() {
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);

	if (start > end) {
		Swap(start, end);
	}
	printf("after : start = %d, end = %d\n", start, end);
}
// main함수의 start와 end값이 지역변수이기 때문에 if문 다음의 출력값은 그대로 나온다
