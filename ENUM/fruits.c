#include <stdio.h>  
int main(void){  
	// enum fruits{mango=10, strawberry, apple};  //10  11  12
	// enum fruits{mango, strawberry=1, apple};  //0  1   2
	// enum fruits{mango, strawberry=1, apple=1};  //0  1   1
	// enum fruits{mango=4, strawberry=1, apple=1};  //4  1   1
	enum fruits{mango=5, strawberry=7, apple};  //5   7   8
	printf("The value of mango is %d", mango);  
	printf("\nThe value of strawberry is %d", strawberry);  
	printf("\nThe value of apple is %d", apple);  
	return 0;  
}  