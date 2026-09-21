#include <stdio.h>

typedef unsigned short my_uint16;

void print_binary(my_uint16 x){
	for(int i=0;i<16;i++){
		printf("%d",(x & 1));
		x >>= 1;
	}
	printf(" ");
}

int main(){


	// printf("%d\n", sizeof(unsigned short)); //size is 2 bytes, 16 bits

	int var1 = 42; // 4 bytes (8 bits per byte addressable memory) 
	short int var2 = 64; // 2 bytes

	printf("%d %d \n", var1, var2);
	printf("%x %x \n", var1, var2);

	print_binary(*(my_uint16*) &var1);
	print_binary(*(my_uint16*) &var2);

	return 0; 
}
