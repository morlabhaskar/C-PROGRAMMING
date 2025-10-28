#include<stdio.h>
#include<stdlib.h>
//./a.exe   hello   hai
int main(int argc,char *argv[]){
    printf("%d\n",argc);//3
    puts(argv[0]);
    puts(argv[1]);//hello
    puts(argv[2]);//hai
}
