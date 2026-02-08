//WAP to count number of frequency numbers in the given string
#include <stdio.h>
#include <string.h>
int frequency_count(char *str,int n){
    int count=0;
    for(int i=0;str[i];i++){
        if(n==str[i]) count++;
    }
    return count;
    
}
int main() {
    char str[100];
    int freq[10]={0};   //Initialized all zeros
    printf("Enter the String : \n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9'){
            freq[str[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}
