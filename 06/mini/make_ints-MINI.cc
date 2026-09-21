#include <stdio.h>


int main(){
	
	int var1 = 42; // 4 bytes (8 bits per byte addressable memory) 
	short int var2 = 64; // 2 bytes

	printf("sizeof int = %d \n", sizeof(var1));
	printf("sizeof short int = %d \n", sizeof(var2));

	printf("address of int = %p \n",&var1);
	printf("address of short int = %p \n",&var2);

	//nothing wrong with using addresses / pointers. every time you make a array you are technecally making a pointer. 
	//interesting how computer selects where to store upon declaring, idk what goes on underneath, but it seems to go backwards, using the stack high address for the first variable and then going backwards
	


	return 0; 
}
