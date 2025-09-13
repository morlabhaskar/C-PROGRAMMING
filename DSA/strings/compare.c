#include<stdio.h>
#include<string.h>

void main(){
    char s1[10],s2[10];
    int flag = 0;
    // int value;
    printf("Enter First :");
    gets(s1);

    printf("Enter Second :");
    gets(s2);

    // value = strcmp(s1,s2);
    // printf("Comparision is : %d",value);

    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){
        if(s1[i] != s2[i]){
            flag=1;
            break;
        }
    }

    if(flag == 0)
        printf("Same");
    
    else
        printf("Not Same");
    

}