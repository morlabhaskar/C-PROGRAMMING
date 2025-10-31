#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]){
    if(argc != 3){
        printf("Invalid Command Line Arguments\n");
        printf("<./a.out>  <char>   <filename>\n");
        exit(0);
    }
    char str[100];
    int count = 0;
    FILE *fptr = NULL;
    fptr = fopen(argv[2],"r");
    while(fgets(str,sizeof(str),fptr)){
        for(int i=0;str[i];i++){
            if(str[i]==argv[1][0]){
                count ++;
            }
        }
    }
    printf("%d\n",count);
}