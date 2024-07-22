#include <stdio.h>

int main() {
	char number;
	scanf("%hhi", &number);
	number = (number <= 1) ? 0 : ((number > 20) ? 20 : number);
	for (unsigned char i = 0; i < number; i++) {
		putchar('*');
		for (unsigned char j = 0; j < i; j++) putchar(' ');
		printf("*\n");
	}
	for (unsigned char i = number; i > 0; --i) {
		putchar('*');
		for (unsigned char j = 1; j < i; j++) putchar(' ');
		printf("*\n");
	}
	return 0;
}
