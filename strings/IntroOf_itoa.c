//The function itoa() in C is used to convert an integer (int) into a string (char array) in a 
//given base (like 2 for binary, 10 for decimal, 16 for hexadecimal, etc.).
//char *itoa(int value, char *str, int base);
//value → the integer to convert
//str → the character array to store the resulting string
//base → the number system (2 to 36)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int main(){
//     char str[30]="123";// '1'  '2'  '3'  '\0'
//     for(int i=0;str[i];i++){
//         printf("%c",str[i]+48); //a  b  c
//     }
// }
int main(){
    int a1 =20;
    int a2 =20.1;
    int a3 =-20;
    char temp1[30];
    char temp2[30];
    char temp3[30];
    
    // itoa(a1,temp1,10);
    // itoa(a2,temp2,10);
    // itoa(a3,temp3,10);

    // itoa(a1,temp1,2);
    // itoa(a2,temp2,2);
    // itoa(a3,temp3,2);

    itoa(a1,temp1,16);
    itoa(a2,temp2,16);
    itoa(a3,temp3,16);

    printf("%s\n",temp1);
    printf("%s\n",temp2);
    printf("%s\n",temp3);
}









































// int main(){
//     int num;
//     char str[30];
//     printf("Enter a Number :\n");
//     scanf("%d",&num);
//     itoa(num,str,10);//10 for decimal
//     printf("String is : %s",str);
// }