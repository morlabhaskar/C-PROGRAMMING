#ifndef __HEADER_H__
#define __HEADER_H__

typedef struct Admin{
    int emp_id;
    char name[20];
    char Apassword[20];
    int Admin_count;
}ADMIN;

typedef struct Account{
    int acc_num;
    char name[20];
    char Upassword[20];
    float balance;
    char phone[20];
    struct Account *next;
}ACCOUNT;

extern ACCOUNT *accounts_head;
extern ADMIN *admin_head;
extern int size;
extern int flag;
extern int adminFound;

//admin
ADMIN *createAdminNode(int emp_id,char *name,char *Apassword,int Admin_count);
ADMIN *AdminFetch(int admin_count,char *aPass,int emp_id,char *name);
ADMIN *admin_sync(char *filename);
// void admin_save(char *filename);
void signUpAdmin(char *filename);
void loginAdmin();



ACCOUNT *createNode(int ,char* ,char* ,float ,char *);
void login_menu();
void admin_menu();
void user_menu();

#endif
