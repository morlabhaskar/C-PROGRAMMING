#include <stdio.h>  
//without tag name also possible , but var should be provide immediatly

enum {success, fail,no,ok} status;  
int main(void){  
	status=ok;  
	status=no;  
	printf("The value of status is %d", status);  
	return 0;  
}  