#include<stdio.h>
void login_menu(){
    printf("========== BANK LOGIN TYPE =========\n");
    printf("u : user login\n");
    printf("s : admin signUp\n");
    printf("a : admin login\n");
    printf("q : Quit\n");
    printf("====================================\n");
}

void admin_menu(){
    printf("========== BANK ADMIN MENU =========\n");
    printf("i : Create New Account\n");
    printf("p : Display All Accounts\n");
    printf("d : Delete Account\n");
    printf("c : Change Admin Password\n");
    printf("q : Quit\n");
    printf("====================================\n");
}
void user_menu(){
    printf("========== BANK USER MENU  =========\n");
    printf("b : Check Balance\n");
    printf("c : Change Password\n");
    printf("d : Deposit Money\n");
    printf("w : Withdraw Money\n");
    printf("q : Quit\n");
    printf("====================================\n");
}
