#include <stdio.h>  
//without tag name also possible , but var should be provide immediatly

enum {success, fail,no,ok} status;  
int main(void){  
	status=ok; //status = 3
	status=no;  //status = 2
	printf("The value of status is %d", status);//The value of status is 2  
	return 0;  
}  