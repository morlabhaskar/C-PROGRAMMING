#include<stdio.h>
#include "header.h"
ACCOUNT *head=NULL;
int size=sizeof(ACCOUNT)-sizeof(ACCOUNT*);

//./a.out  filename
int main(int argc,char *argv[]){
    char ch;
    head=sync(head);
    while(1){
        if(flag==0){
            login_menu();
            scanf(" %c",&ch);
            getchar();
            switch(ch){
                case 'u':
                    loginUser(argv[1]);
                    break;
                case 's':
                    signUpAdmin(argv[1]);
                    break;
                case 'a':
                    loginAdmin(argv[1]);
                    break;
                case 'q':
                    printf("Byee\n");
                    exit(0);
                default:
                    printf("Invalid Operation\n");
                    break;
            }
        }
        else if(flag==1){
            void admin_menu();
            scanf(" %c",&ch);
            getchar();
        }
    }
}