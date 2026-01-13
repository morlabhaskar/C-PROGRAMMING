#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int age;
}student;
int main(){
    printf("Enter a Name :\n");
    // scanf("%s",student.name);
    fgets(student.name,sizeof(student.name),stdin);
    if(student.name[strlen(student.name)-1] == '\n') student.name[strlen(student.name)-1] = '\0';
    printf("Enter a Age :\n");
    scanf("%d",&student.age);
    printf("Name is %s\n",student.name);
    printf("Age is %d\n",student.age);
    
}

