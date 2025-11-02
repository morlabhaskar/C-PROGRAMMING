#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
void *readFromFile(char *filename){
    char (*p)[100]=NULL;
    FILE *fp;
    char str[100];
    fp=fopen(filename,"r");
    if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
    while(fgets(str,sizeof(str),fp)){
        p=realloc(p,(cnt+1)*100);
        strcpy(p[cnt],str);
        cnt++;
    }
    fclose(fp);
    return p;
}
void *deleteLine(char (*p)[100],int line){
    if(line>cnt || line<=0){
        printf("Invalid line\n");
        exit(0);
    }
    memmove(p+line-1,p+line-1+1,(cnt-line)*sizeof(*p));
    return p=realloc(p,--cnt*sizeof(*p));
}
void writeToFile(char (*p)[100],char *filename){
    FILE *fp=NULL;
    int i=0;
    fp = fopen(filename,"w");//previous content is erased and ready for writing new content
    for(i=0;i<cnt;i++){
       fputs(p[i],fp); 
    }
    fclose(fp);
}
int main(int argc,char *argv[]){
    char (*lines)[100]=NULL;
    int linenum;
    if(argc!=3){
        printf("Incorrect Input!\n");
        printf("exe  filename  linenum\n");
        exit(0);
    }
    lines = readFromFile(argv[1]);
    lines = deleteLine(lines,atoi(argv[2]));
    writeToFile(lines,argv[1]);

}