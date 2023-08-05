#include<stdio.h>
void MyFunc(char* p_char, short* p_short, int* p_int) {
	if (p_char != NULL) {
		*p_char = 1;
	}
	else if (p_short != NULL) {
		*p_short = 1;
		printf("%p", *p_short);
	}
	else {
		*p_int = 1;
	}
}


void main() {
	short data = 5;
	MyFunc(NULL, &data, NULL);
}