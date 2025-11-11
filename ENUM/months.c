#include <stdio.h>  
enum months{jan=2, feb=2, march=9, april=6, may, june, july, august, september, october, november, december};  
int main(){  
	// printing the values of months  
	for(int i=jan;i<=december;i++){  
		printf("%d ",i);  
	} 
	return 0;  
}  
