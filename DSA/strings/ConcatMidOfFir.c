//Insert a Second String in Middle of the First String
#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    printf("Enter a String1 :\n");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter a String2 :\n");
    fgets(str2,sizeof(str2),stdin);
    if(str1[strlen(str1)-1] == '\n'){
        str1[strlen(str1)-1] = '\0';
    }
    if(str2[strlen(str2)-1] == '\n'){
        str2[strlen(str2)-1] = '\0';
    }

    printf("\n Output is : \n");
    int total_len = strlen(str1) + strlen(str2),one=0,two=0;
    for(int i=0;i<total_len;i++){
        if(i%2 == 0){
            printf("%c\t",str1[one]);
            one++;
        }
        else{
            printf("%c\t",str2[two]);
            two++;
        }
    }
}