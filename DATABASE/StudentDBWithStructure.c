#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count=0;
typedef struct Student{
    char *name;
    char *roll;
    char *branch;
    char *phone;
}STUDENTS;
void printMenu() {
    printf("\n|===========================================|\n");
    printf("|           STUDENT DATA BASE MENU          |\n");
    printf("|===========================================|\n");
    printf("|       i : Input Record                    |\n");
    printf("|       p : Print All Records               |\n");
    printf("|       f : Find Record by Name             |\n");
    printf("|       s : Save Records                    |\n");
    printf("|       o : Sort Records by Name            |\n");
    printf("|       d : Delete Record by Name           |\n");
    printf("|       u : Update Record by Name           |\n");
    printf("|       q : Quit                            |\n");
    printf("|===========================================|\n");
    printf("Enter your choice: ");
}
char *getString(){
    int i=0;
    char *ptr=NULL;
    do{
        ptr=realloc(ptr,(i+1)*sizeof(char));
        ptr[i]=getchar();
    }while(ptr[i++]!='\n');
    ptr[i-1]='\0';
    return ptr;
}
STUDENTS *input(STUDENTS *students){
    students=realloc(students,(count+1)*sizeof(STUDENTS));
    printf("Enter Student Name :\n");
    students[count].name=getString();
    printf("Enter Student RollNo :\n");
    students[count].roll=getString();
    printf("Enter Student Branch :\n");
    students[count].branch=getString();
    printf("Enter Student Phone :\n");
    students[count].phone=getString();
    count++;
    printf("\033[1;32m=== Record Added Successfully ===\033[0m\n");
    return students;
}
void print(STUDENTS *students){
    if(count==0){
        printf("\033[1;33m=== No Records Found! ===\033[0m\n");
        return;
    }
    printf("\033[1;34m------------------------------------------------------------------------------------\n");
    printf("|                                STUDENT RECORDS                                   |\n");
    printf("|----------------------------------------------------------------------------------|\n");
    printf("|   Index   |     Name       |     RollNo       |      Branch       |     Phone    |\n");
    printf("|----------------------------------------------------------------------------------|\n");
    for(int i=0;i<count;i++){
        printf("|    %d      | %s        | %s              | %s                | %s         |\n",i,students[i].name,students[i].roll,students[i].branch,students[i].phone);
        if(count>i+1){
            printf("|-----------------------------------------------------------------------------------|\n");
        }
    }
    printf("===================================================================================\033[0m\n");
}
void sort(STUDENTS *students){
    if(count < 2){
        printf("\033[1;33m=== Not Enough Data to Sort! ===\033[0m\n");
        return;
    }
    for(int i=count-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(strcmp(students[j].name,students[j+1].name)>0){
                STUDENTS temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    printf("\033[1;32m=== Sorted Successfully ===\033[0m\n");
}
void find(STUDENTS *students){
    if(count==0){
        printf("\033[1;33m=== No Records to Search! ===\033[0m\n");
        return;
    }
    printf("Enter Name to Find :\n");
    char *fname=getString();
    int flag=1;
    for(int i=0;i<count;i++){
        if(strcmp(fname,students[i].name)==0){
            flag=0;
            printf("\033[1;32m   ======= RECORD FOUND! =======\n");
            printf("      Name    : %s\n", students[i].name);
            printf("      Roll No : %s\n", students[i].roll);
            printf("      Branch  : %s\n", students[i].branch);
            printf("      Phone   : %s\n", students[i].phone);
            printf("   =============================\033[0m\n");
            break;
        }
    }
    if(flag) printf("\033[1;33m=== No Record Found with Name of %s ===\033[0m\n",fname); 
}
STUDENTS *delete(STUDENTS *students){
    if(count==0){
        printf("\033[1;33m=== Database is Empty! ===\033[0m\n");
        return students;
    }
    printf("Enter a Name to Delete Record :\n");
    char *dname = getString();
    int index=-1;
    for(int i=0;i<count;i++){
        if(strcmp(dname,students[i].name)==0){
            index=i;
            break;
        }
    }
    if(index==-1){
        printf("\033[1;33m=== Record Not Found! ===\033[0m\n");
        return students;
    }
    free(students[index].name);
    free(students[index].roll);
    free(students[index].branch);
    free(students[index].phone);
    memmove(students+index,students+index+1,(count-index-1)*sizeof(STUDENTS));
    students = realloc(students,--count*sizeof(STUDENTS));
    if(count==0){
        free(students);
        students=NULL;
        printf("\033[1;31m=== All Records Deleted! ===\033[0m\n");        
    }
    else {
        printf("\033[1;31m=== Record Deleted Successfully! ===\033[0m\n");
    }
    return students;
}
char *status(char *name){
    char *temp=NULL,*res;
    printf("Are you Update the %s,If want type yes Other wise no :\n",name);
    temp = getString();
    if(strcmp(temp,"yes")==0){
        printf("Enter New %s :\n",name);
        res=getString();
    }
    return res;
}
STUDENTS *update(STUDENTS *students){
    if(count==0){
        printf("\033[1;33m=== Database is Empty! ===\033[0m\n");
        return students;
    }
    printf("Enter Record User Name to Update :\n");
    char *uName = getString();
    int found = -1;
    for(int i=0;i<count;i++){
        if(strcmp(students[i].name,uName)==0){
            found=i;
            break;
        }
    }
    if(found != -1){
        char *temp=NULL;
        temp=status("Name");
        free(students[found].name);
        students[found].name=temp;
        free(temp);
        temp=status("Roll No");
        free(students[found].roll);
        students[found].roll=temp;
        free(temp);
        temp=status("Branch");
        free(students[found].branch);
        students[found].branch=temp;
        free(temp);
        temp=status("Phone");
        free(students[found].phone);
        students[found].phone=temp;
        free(temp);
        printf("\033[1;32m=== Record Updated Successfully! ===\033[0m\n");
    }
    else{
        printf("\033[1;33m=== Name Not Found! ===\033[0m\n");
        students=students;
    }
    return students;
}

void save(STUDENTS *students,char *filename){
    FILE *fptr = fopen(filename, "w");
    if (!fptr){
        printf("\033[1;31mError: Could not open file to save data!\033[0m\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, fptr);
    for (int i = 0; i < count; i++) {
        int len;

        len = strlen(students[i].name) + 1;
        fwrite(&len, sizeof(int), 1, fptr);
        fwrite(students[i].name, sizeof(char), len, fptr);

        len = strlen(students[i].roll) + 1;
        fwrite(&len, sizeof(int), 1, fptr);
        fwrite(students[i].roll, sizeof(char), len, fptr);

        len = strlen(students[i].branch) + 1;
        fwrite(&len, sizeof(int), 1, fptr);
        fwrite(students[i].branch, sizeof(char), len, fptr);

        len = strlen(students[i].phone) + 1;
        fwrite(&len, sizeof(int), 1, fptr);
        fwrite(students[i].phone, sizeof(char), len, fptr);
    }

    fclose(fptr);
    printf("\033[1;32m=== Data Saved Successfully to File ===\033[0m\n");
}

STUDENTS *syncFromFile(STUDENTS *students,char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("\033[1;33m=== No Previous Data Found ===\033[0m\n");
        return students;
    }

    fread(&count, sizeof(int), 1, fp);
    if (count == 0) {
        fclose(fp);
        printf("\033[1;33m=== File is Empty! ===\033[0m\n");
        return students;
    }

    students = realloc(students, count * sizeof(STUDENTS));

    for (int i = 0; i < count; i++) {
        int len;

        fread(&len, sizeof(int), 1, fp);
        students[i].name = malloc(len);
        fread(students[i].name, sizeof(char), len, fp);

        fread(&len, sizeof(int), 1, fp);
        students[i].roll = malloc(len);
        fread(students[i].roll, sizeof(char), len, fp);

        fread(&len, sizeof(int), 1, fp);
        students[i].branch = malloc(len);
        fread(students[i].branch, sizeof(char), len, fp);

        fread(&len, sizeof(int), 1, fp);
        students[i].phone = malloc(len);
        fread(students[i].phone, sizeof(char), len, fp);
    }
    fclose(fp);
    printf("\033[1;32m=== Data Synced from File Successfully ===\033[0m\n");
    return students;
}

//a.out  filename
int main(int argc,char *argv[]){
    STUDENTS *students=NULL;
    students=syncFromFile(students,argv[1]);
    char choice;
    while(1){
        printMenu();
        scanf(" %c",&choice);
        getchar();
        switch(choice){
            case 'i':students=input(students);break;
            case 'p':print(students);break;
            case 'o':sort(students);break;
            case 's':save(students,argv[1]);break;
            case 'f':find(students);break;
            case 'd':students=delete(students);break;
            case 'u':students=update(students);break;
            case 'q':
                    for(int i=0;i<count;i++){
                        free(students[i].name);
                        free(students[i].roll);
                        free(students[i].branch);
                        free(students[i].phone);
                    }
                    free(students);
                    printf("\033[1;32mExiting Program... Goodbye!\033[0m\n");
                    return 0;
            default: printf("\033[1;33m=== Invalid Choice! Try Again. ===\033[0m\n");
        }
    }
}