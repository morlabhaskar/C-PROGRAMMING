//atoi() stands for ASCII to Integer — it’s a C library function used to convert a
//string (containing digits) into an integer.
//int atoi(const char *str);
#include<stdio.h>
#include<stdlib.h>
int is_digit(char dig){
    if(dig>='0' && dig<='9') return 1;
    return 0;
}
int my_atoi(char *str){
    int i=0,sign=1,decimal=0;//123
    while(str[i]==' '){
        i++;
    }
    if(str[i]=='-'||str[i]=='+'){
        if(str[i]=='-'){
            sign=-1;
        }
        i++;
    }
    while(is_digit(str[i])){//'1' '2'
        decimal = decimal * 10 + (str[i]-'0');//0*10+('1'-'0')=0+(49-48)=1
        i++;                                  //1*10+('2'-'0')=10+(50-48)=10+2=12
    }                                         //12*10+('3'-'0')=120+(51-48)=120+3=123
    return decimal*sign;
}
int main(){
    char s1[20]="123";
    char s2[20]="    123";
    char s3[20]="123    ";
    char s4[20]="a123";
    char s5[20]="123a";
    char s6[20]="1a23";
    char s7[20]="12.3";
    char s8[20]="-123";
    char s9[20]="abc";
    printf("%d\n",my_atoi(s1));//123
    printf("%d\n",my_atoi(s2));//123
    printf("%d\n",my_atoi(s3));//123
    printf("%d\n",my_atoi(s4));//0
    printf("%d\n",my_atoi(s5));//123
    printf("%d\n",my_atoi(s6));//1
    printf("%d\n",my_atoi(s7));//12
    printf("%d\n",my_atoi(s8));//-123
    printf("%d\n",my_atoi(s9));//0
}

//'0'→'9'     →   48 - 57
//'A'→'Z'     →   65 - 90
//'a'→'z'     →   97 - 122
