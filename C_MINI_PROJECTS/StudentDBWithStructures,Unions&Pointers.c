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
    printf("|       d : Update Record by Name           |\n");
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
        printf(" %d | %s | %s | %u-%u-%u | %2f | %s \n"
            ,i,student[i].id,student[i].name,student[i].dob.day,student[i].dob.month,student[i].dob.year,
            (student[i].per.flag==0) ? student[i].per.SSCPLUS.inter :student[i].per.SSCPLUS.diploma,student[i].phn);
        if(count>i+1){
            printf("-----------------------------------------------------------------------------------\n");
        }
    }
}
void sort(V25HE2 *student){
    if(count < 2){
        printf("\033[1;33m=== Not Enough Data to Sort! ===\033[0m\n");
        return;
    }
    for(int i=count-1;i>=0;i--){
        for(int j=0;j<i;i++){
            if(strcmp(student[j].name,student[j+1].name)>0){
                V25HE2 temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
        }
    }
    if(count>=2) printf("\033[1;32m=== Sorted Successfully ===\033[0m\n");
}

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
            // case 'f':find(students);break;
            // case 'd':students=delete(students);break;
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