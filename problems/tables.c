#include<stdio.h>
int cntDigits(int var){
	int cnt=0;
	while(var){
		++cnt;
		var/=10;
	}
    return cnt;
}
int main(){
	int a,b,min,max;
	int width;
	printf("Enter range:\n");
	printf("enter min:");scanf("%d",&min);
	printf("enter max:");scanf("%d",&max);
	if(min>max){ 
        // a=min;
        // min=max;
        // max=a;
        min ^= max ^= min ^= max;
    }
    width=cntDigits(max)+2;
	for(a=min;a<=max;a++){
		for(b=1;b<=10;b++){
			printf("%*d",width,a*b);
		}
        printf("\n");
	}
	return 0;
}