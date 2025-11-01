#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse_string(char *ptr){
    char *left = NULL,*right = NULL,temp;
    left = ptr;
    right = ptr+(strlen(ptr)-2);
    while(left<right){
        if((*left)!=(*right)){
            temp = *left;
            *left = *right;
            *right = temp;
        }
        left++;
        right--;
    }
}

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("incorrect inputs\n");
		exit(0);
	}
	FILE *fp;
	char str[100];
	fp=fopen(argv[1],"r+");
	if(fp==NULL)
	{
		printf("%s is not found\n",argv[1]);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		reverse_string(str);
		fseek(fp,-strlen(str),1); // moving from current line to previous line
		fputs(str,fp);
	}
	fclose(fp);

    printf("File updated with reversed lines successfully.\n");
}
