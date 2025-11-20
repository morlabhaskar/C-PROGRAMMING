#include <stdio.h>  
enum months{jan=2, feb=2, march=9, april=6, may, june, july, august, september, october, november, december};  
int main(){  
	// printing the values of months  
	for(int i=jan;i<=december;i++){  //december=14
		printf("%d ",i);// 2 3  4  5  6 7 8 9 10 11 12  13  14 
	} 
	return 0;  
}  
