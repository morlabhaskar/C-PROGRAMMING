#include<stdio.h>
int find_duplicates(int *arr,int len){
    int flag=0;
    printf("Duplicates :\n");
    for(int i=0;i<len;i++){
        int cnt=1;
        //skip previus find
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                cnt=0;
            }
        }
        if(cnt==0){
            continue;
        }
        cnt=0;
        for(int j=0;j<len;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>1){
            printf("%d  ",arr[i]);
            flag=1;
        }
    }
    printf("\n");
    return flag;
}
int main(){
    int arr[10]={1,2,3,2,4,2,7,6,4,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int flag=find_duplicates(arr,len);
    if(flag==0){
        printf("No Dulpicates\n");
    }
}