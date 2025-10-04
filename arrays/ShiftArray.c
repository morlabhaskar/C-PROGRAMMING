#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void left_shift(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=0;
}
void right_shift(int arr[],int n){
    int i;
    for(i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}
int main(){
    int n,*arr,shift;
    char type;
    printf("No of Array Elements :\n");
    scanf("%d",&n);
    if(n<=0){
        printf("No of elements are invalid"); 
        return 0;
    }
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter Shift Type \nLeft:\'l\' \nRight:\'r\'\n");
    scanf(" %c",&type);// space before %c to consume newline
    printf("How many times you want Shift :\n");
    scanf("%d",&shift);
    for(int i=0;i<shift;i++){
        if(type=='r') right_shift(arr,n);
        else left_shift(arr,n);
    }
    printf("Shifted Array is :\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}