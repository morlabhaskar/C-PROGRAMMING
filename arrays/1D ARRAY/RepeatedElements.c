#include<stdio.h>
#include<stdlib.h>
int check_repeated(int *arr,int n,int num){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    if(count>=2) return 1;
    return 0;
}
int contain(int *freq,int ele,int len){
    for(int i=0;i<len;i++){
        if(freq[i]==ele){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,*arr,flag=1,freq[2]={0},cnt=0; //2 2 2 3 4 5 2 5 6 2
    printf("Enter Size :\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(n<=0){
        printf("invalid size");
        return 0;
    }
    printf("Enter Array Elements :\n");
    for(int i=0;i<n;i++){
        // scanf("%d",arr+i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(check_repeated(arr,n,arr[i])){
            if(contain(freq,arr[i],2)){
                freq[cnt]=arr[i];
                cnt++;
                flag=0;
            }
        }
    }
    if(flag){
        printf("no repeated elements");
    }
    else{
        printf("Repeated Elements are :\n");
        for(int i=0;i<2;i++){
            printf("%d ",freq[i]);
        }
    }
}