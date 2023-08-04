#include<stdio.h>
void main() {
	// int * const p; 
	/*int data = 5, temp = 0;
	int* const p = &data;
	*p = 3;
	p = &temp;*/
	// p = &data(p에 data의 주소값을 저장해라); 
	// 그리고 p앞에 const 입력하여 p가 상수화 된다.

	// const int * p
	/*int data = 5;
	const int* p = &data;
	*p = 3;*/
	// *p = 3 ;(할당된 주소값에 해당값을 대입하라는 의미이다.) const int *p ->할당된 값을 바꾸지 마라!!

	// const int * const p;
	int data = 5, temp = 0;
	const int* const p = &data;
	*p = 3;
	p = &temp;
	// const int * const p -> 할당된 값과 주소값 모두 상수화됨 즉
}