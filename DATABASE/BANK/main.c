#include<stdio.h>
#include<stdlib.h>
#include "header.h"
ACCOUNT *accounts_head=NULL;
ADMIN *admin_head=NULL;
// size=sizeof(ACCOUNT)-sizeof(ACCOUNT*);
int flag=0;
int adminFound=0;
//mingw32-make
//./a.out  filename
int main(int argc,char *argv[]){
    char ch;
    // head=sync(head);
    admin_head=admin_sync(argv[1]);
    while(1){
        if(flag==0){//login
            login_menu();
            scanf(" %c",&ch);
            getchar();
            switch(ch){
                // case 'u':
                //     loginUser(argv[1]);
                //     break;
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
        else if(flag==1){//admin
            admin_menu();
            scanf(" %c",&ch);
            getchar();
        }
        else if(flag==3){//user

        }
    }
}