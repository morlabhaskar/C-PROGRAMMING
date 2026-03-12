#include<stdio.h>
#include<string.h>
int sumOfAscii(char *input1,char *input2){
    char buff[50]="";
    int n=strlen(input1),cnt=0;
    for(int i=0;i<n;i++){
        char sub[50];
        int k=0;
        for(int j=i;j<n;j++){
            sub[k++]=input1[j];
            sub[k]='\0';
            if(strstr(input2,sub)&&strlen(sub)>strlen(buff)){
                strcpy(buff,sub);
            }
        }
    }
    if(strlen(buff)>0){
        for(int i=0;buff[i];i++){
            cnt+=buff[i];
        }
        return cnt;
    }
    return 0;
}
int main(){
    char str1[100],str2[100];
    // char str1[]="furniture",str2[]="future";
    int cnt;
    printf("Enter the String1 :\n");
    fgets(str1,100,stdin);
    printf("Enter the String2 :\n");
    fgets(str2,100,stdin);
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-1]='\0';
    cnt=sumOfAscii(str1,str2);
    printf("substring Ascii sum : %d",cnt);
    return 0;
}
/*
str1=furniture
str2=future
common longest substring = "ture"
116+117+114+101=448 answer
*/