#include <stdio.h>  

enum status {failed=-1,freez,working=0};  
int main(void){  
	enum status status=freez;  //0
	printf("The value of status is %d", status);//The value of status is 0  
	//make a calll to some function 
	//get return values -1 OR 0 OR 1
	//test and display staus 
	return 0;  
}  
