#include <stdio.h>

void decimalToBinary(int num) {   
	if (num == 0) {
		printf("0");
		return;
	}
	
    // Stores binary representation of number.
    int binaryNum[64]; // Assuming 32 bit integer.
	int i=0;
	
	for ( ;num > 0; ){
		binaryNum[i++] = num % 2;
		num /= 2;
	}
	
    // Printing array in reverse order.
    for (int j = i-1; j >= 0; j--)
	{
		putchar('0' +binaryNum[j]);
	}
	printf("\n");
}

int main() {
	int num = 98;
	decimalToBinary(num);
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
