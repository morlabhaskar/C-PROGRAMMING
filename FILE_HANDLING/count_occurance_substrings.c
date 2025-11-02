/*program to count the number of occurances of substring*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int allOccOfString(char *filename,char *sub){
	FILE *fp;
	int cnt=0;
	char str[30];
	fp=fopen(filename,"r");
	if(fp==NULL){
		printf("File not found\n");
		exit(0);
	}
	while(fgets(str,sizeof(str),fp)){
        char *ptr=str;
        while((ptr=strstr(ptr,sub))!=NULL){
            cnt++;
            ptr=ptr+strlen(sub);
        }
    }
	fclose(fp);
	return cnt;
}
// ./a.out filename substring
int main(int argc, char *argv[])
{	int cnt=0;
	if(argc!=3)
	{
		printf("Invalid inputs\n");
		exit(0);
	}
	cnt=allOccOfString(argv[1],argv[2]);
	printf("%s occurred %d times\n",argv[2],cnt);
}