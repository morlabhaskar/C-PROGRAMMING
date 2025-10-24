#include <stdio.h>

#define DEBUG

int main()
{

#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	printf("Hello World...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	printf("Hello World...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
#undef DEBUG
	printf("Hello World...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	printf("Hello World...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	printf("Hello World...!");
	return 0;
}
