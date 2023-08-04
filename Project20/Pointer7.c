#include<stdio.h>
void Swap(int* const pa, int* const pb) {// 상수화하여 실수 방지
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}



void main() {
	int start = 96, end = 5;

	printf("before : start = %d, end = %d \n", start, end);
	if (start > end) {
		Swap(&start, &end);
	}
	printf("after : start = %d, end = %d\n", start, end);
}