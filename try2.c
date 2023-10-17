#include <stdio.h>

void decimalToBinary(unsigned int num, int *len_ptr) {
	if (num == 0)
    {
		return;
	}
	decimalToBinary(num / 2, len_ptr);
	putchar('0' + (num % 2));
    (void)(*len_ptr)++;
}

int main() {
	int num = 98, len = 0;
    decimalToBinary(num, &len);
	printf("%d\n", len);
	return 0;
}



/*
int main() {
	int num ,len = 0 ,rev = 0,ncpy, remaind = 0 ;
	num = 123456;
	ncpy = num;
	while(ncpy)
	{
		ncpy /= 10;
		len++;
	}
	while (num)
	{
		remaind = num % 10;
		rev = rev * 10 + remaind;
		num /= 10;
	}
	printf("%d\n", rev);
	printf("%d\n", len);

	return 0;
}
*/
