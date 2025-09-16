//Count the number of Alphabets,Numeric and Special Characters in Given String
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isAlphaCnt(char *str){
    int cnt = 0;
    for(int i=0;str[i]!='\0';i++){
        char ch = tolower(str[i]);
        if(ch>=97 && ch<=122){
            cnt++;
        }
    }
    return cnt;
}
int isNumericCnt(char *str){
    int cnt = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=48 && str[i]<=57){   //#hellohe2@@startcoding&&1234Bye*
            cnt++;
        }
    }
    return cnt;
}
int main(){
    char str[100];
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }

    int AlphCnt = isAlphaCnt(str);
    int NumericCnt = isNumericCnt(str);
    printf("Alphabets Characters Count is : %d\n",AlphCnt);
    printf("Numeric Characters Count is : %d\n",NumericCnt);
    printf("Special Characters Count is : %d\n",strlen(str)-(AlphCnt+NumericCnt));
}