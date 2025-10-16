#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*arr,sub,MaxSum=0;
    printf("No of Array Elements :\n");
    scanf("%d",&n);
    if(n<0){
        printf("No of elements are invalid"); 
        return 0;
    }
    else if(n==0){
        printf("invalid size"); 
        return 0;
    }
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d Array Elements :\n",n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter SubArray Length :\n");
    scanf("%d",&sub);
    for(int i=0;i<=n-sub;i++){
        int temp=0;
        for(int j=i;j<=i+sub-1;j++){
            printf("%d ",arr[j]);
            temp+=arr[j];
        }
        if(temp>MaxSum) MaxSum=temp;
        printf("\n");
    }
    printf("MaxSum = %d\n",MaxSum);
}