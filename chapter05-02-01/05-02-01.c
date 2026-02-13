#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

void main() {
	int s;
	s = Sum(2, 3);
	printf("´õÇÏ±â ÀÛ¾÷ÀÇ °á°ú´Â %d \n", s); //더하기 작업의 결과는 이라는 뜻.
}
