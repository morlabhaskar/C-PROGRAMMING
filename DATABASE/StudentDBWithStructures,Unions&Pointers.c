#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count = 0;

typedef struct DOBB{
    unsigned int day:5;
    unsigned int month:4;
    unsigned int year:12;
}DOB;
typedef struct{
    float ssc;
    union{
        float inter;
        float diploma;
    }SSCPLUS;
    int flag;
    float degree;
}MARKS;
typedef struct student{
    char *id;
    char *name;
    DOB dob;
    MARKS per;
    char *phn;
}V25HE2;

void printMenu() {
    printf("\n|===========================================|\n");
    printf("|           STUDENT DATA BASE MENU          |\n");
    printf("|===========================================|\n");
    printf("|       i : Input Record                    |\n");
    printf("|       p : Print All Records               |\n");
    printf("|       f : Find Record by Name             |\n");
    printf("|       s : Sort Records by Name            |\n");
    printf("|       d : Delete Record by Name           |\n");
    // printf("|       u : Update Record by Name           |\n");
    printf("|       q : Quit                            |\n");
    printf("|===========================================|\n");
    printf("Enter your choice: ");
}

char *getString(){
    int i=0;
    char *p=NULL;
    do{
        p=realloc(p,i+1);
        p[i]=getchar();
    }while(p[i++]!='\n');
    p[i-1]='\0';
    return p;
}

V25HE2 *input(V25HE2 *student){
    unsigned int temp;
    student = realloc(student,(count+1)*sizeof(V25HE2));
    printf("Enter id :\n");
    student[count].id = getString();
    printf("Enter Name :\n");
    student[count].name = getString();
    printf("Enter DOB of day :\n");
    scanf("%d",&temp);
    student[count].dob.day=temp;
    printf("Enter DOB of month in formate of 1-12 :\n");
    scanf("%d",&temp);
    student[count].dob.month=temp;
    printf("Enter DOB of year :\n");
    scanf("%d",&temp);
    student[count].dob.year=temp;
    int flag;
    float marks;
    printf("Enter SSCPLUS Marks \n0 for Inter :\n1 for Diploma :\n");
    scanf("%d",&flag);
    if(flag==0){
        printf("Enter Inter Marks :\n");
        scanf("%f",&marks);
    }
    else{
        printf("Enter Diploma Marks :\n");
        scanf("%f",&marks);
    }
    if(flag==0){
        student[count].per.SSCPLUS.inter = marks;
        student[count].per.flag = 0;
    }
    else{
        student[count].per.SSCPLUS.diploma = marks;
        student[count].per.flag = 1;
    }
    printf("Enter Phone No :\n");
    getchar();
    student[count].phn = getString();
    count++;
    printf("\033[1;32m=== Record Added Successfully ===\033[0m\n");
    return student;
}

void print(V25HE2 *student){
    if(count==0){
        printf("\033[1;33m=== No Records Found! ===\033[0m\n");
        return;
    }
    for(int i=0;i<count;i++){
        printf("Record-[%d]\n",i+1);
        printf(" %d | %s | %s | %u-%u-%u | %0.2f | %s \n"
            ,i,student[i].id,student[i].name,student[i].dob.day,student[i].dob.month,student[i].dob.year,
            (student[i].per.flag==0) ? student[i].per.SSCPLUS.inter :student[i].per.SSCPLUS.diploma,student[i].phn);
        if(count>i+1){
            printf("--------------------------------------------------------------\n");
        }
    }
}
void sort(V25HE2 *student){
    if(count < 2){
        printf("\033[1;33m=== Not Enough Data to Sort! ===\033[0m\n");
        return;
    }
    for(int i=count-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(strcmp(student[j].name,student[j+1].name)>0){
                V25HE2 temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
        }
    }
    if(count>=2) printf("\033[1;32m=== Sorted Successfully ===\033[0m\n");
}

void find(V25HE2 *student){
    if(count==0){
        printf("\033[1;33m=== No Records to Search! ===\033[0m\n");
        return;
    }
    char *fname;
    int found = -1;
    printf("Enter Name to Find Record :\n");
    fname = getString();
    for(int i=0;i<count;i++){
        if(strcmp(fname,student[i].name)==0){
            found = i;
            break;
        }
    }
    if(found==-1){
        printf("Record Not Found !\n");
    }
    else{
        printf("Record Found at Index of %d\n",found);
        printf("Id      : %s\n",student[found].id);
        printf("Name    : %s\n",student[found].name);
        printf("DOB     : %u-%u-%u\n",student[found].dob.day,student[found].dob.month,student[found].dob.year);
        (student[found].per.flag==0)?(printf("Inter   : %0.2f\n",student[found].per.SSCPLUS.inter)):(printf("Diploma : %0.2f\n",student[found].per.SSCPLUS.diploma));
        printf("Phone   : %s\n",student[found].phn);
    }
}

V25HE2 *delete(V25HE2 *student){
    if(count==0){
        printf("\033[1;33m=== No Records to Search! ===\033[0m\n");
        return student;
    }
    char *dname;
    int found = -1;
    printf("Enter Name to Find Record :\n");
    dname = getString();
    for(int i=0;i<count;i++){
        if(strcmp(dname,student[i].name)==0){
            found = i;
            break;
        }
    }
    if(found==-1){
        printf("Record Not Found !\n");
        return student;
    }
    free(student[found].id);
    free(student[found].name);
    free(student[found].phn);
    memmove(student+found,student+found+1,(count-found-1)*sizeof(V25HE2));
    student = realloc(student,--count*sizeof(V25HE2));
    if(count==0){
        free(student);
        student=NULL;
        printf("\033[1;31m=== All Records Deleted! ===\033[0m\n"); 
    }
    else {
        printf("\033[1;31m=== Record Deleted Successfully! ===\033[0m\n");
    }
    return student;
}
// char *status(char *name){
//     char *temp=NULL,*res;
//     printf("Are you Update the %s,If want type yes Other wise no :\n",name);
//     temp = getString();
//     if(strcmp(temp,"yes")==0){
//         printf("Enter New %s :\n",name);
//         res=getString();
//     }
//     return res;
// }
// unsigned int update_dob(char *ptr){
//     char *temp=NULL;
//     unsigned int res;
//     printf("Are you Update the %s of your DOB (only numbers),If want type yes Other wise no :\n",ptr);
//     temp = getString();
//     if(strcmp(temp,"yes")==0){
//         printf("Enter New %s in your DOB :\n",ptr);
//         scanf("%u",&res);
//     }
//     else{
//         res=0;
//     }
//     return res;
// }
// V25HE2 *update(V25HE2 *student){
//     if(count == 0){
//         printf("Data Base is Empty!\n");
//         return student;
//     }
//     char *uname;
//     int found=-1;
//     printf("Enter Name to Update Record :\n");
//     uname = getString();
//     for(int i=0;i<count;i++){
//         if(strcmp(uname,student[i].name)==0){
//             found = i;
//             break;
//         }
//     }
//     if(found != -1){
//         char *temp=NULL;
//         temp=status("Id");
//         student[found].id=temp;
//         free(temp);
//         temp=status("Name");
//         student[found].name=temp;
//         free(temp);

//         //for DOB
//         unsigned int dob;
//         dob=update_dob("Day");
//         student[found].dob.day=dob;
//         dob=update_dob("Month");
//         student[found].dob.month=dob;
//         dob=update_dob("Year");
//         student[found].dob.year=dob;

//         // temp=status("Phone");
//         // student[found].phn=temp;
//         // free(temp);
//         printf("\033[1;32m=== Record Updated Successfully! ===\033[0m\n");
//     }
//     else{
//         printf("\033[1;33m=== Name Not Found! ===\033[0m\n");
//         student=student;
//     }
//     return student;
// }
int main(){
    V25HE2 *students=NULL;
    char choice;
    while(1){
        printMenu();
        scanf(" %c",&choice);
        getchar();
        switch(choice){
            case 'i':students=input(students);break;
            case 'p':print(students);break;
            case 's':sort(students);break;
            case 'f':find(students);break;
            case 'd':students=delete(students);break;
            // case 'u':students=update(students);break;
            case 'q':
                    for(int i=0;i<count;i++){
                        free(students[i].id);
                        free(students[i].name);
                        free(students[i].phn);
                    }
                    free(students);
                    printf("\033[1;32mExiting Program... Goodbye!\033[0m\n");
                    return 0;
            default: printf("\033[1;33m=== Invalid Choice! Try Again. ===\033[0m\n");
        }
    }
}