#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int count = 0,i=0;
    printf("Enter Name :");
    // scanf("%s",&name);
    gets(name);
    // printf("%s",name);
    //while(getchar()!='\n');//buffer clearence best way

    puts(name);
    // count = strlen(name);
    while(name[i] != '\0') {
        count++;
        i++;
    }
    printf("Length of String is : %d",name);
}