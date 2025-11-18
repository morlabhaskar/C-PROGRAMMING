#include "node.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
NODE *head = NULL;
int size = sizeof(NODE) - sizeof(NODE *);
//mingw32-make
//.\a.exe  filename
int main(int argc,char *argv[]){
    char ch;
    head=sync(argv[1]);
    while(1){
        printf("\ni:insert   p:print  s:save  q:quit\n");
        scanf(" %c",&ch);
        getchar();
        switch(ch){
            case 'i':
                printf("Enter roll Number :\n");
                int roll;
                scanf("%d",&roll);
                char name[20];
                printf("Enter Name :\n");
                getchar();
                fgets(name,sizeof(name),stdin);
                if(name[strlen(name)-1]=='\n') name[strlen(name)-1]='\0';
                head=insertAtEnd(roll,name);
                break;
            case 'p':
                displayNodes();
                break;
            case 's':
                save(argv[1]);
                break;
            case 'q':
                printf("Byee\n");
                exit(0);
            default:
                printf("Invalid Operation\n");
                break;
        }
    }
}
