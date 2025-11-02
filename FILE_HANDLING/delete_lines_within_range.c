#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
void *readFromFile(char *filename){
    char (*p)[100]=NULL;
    FILE *fp;
    char str[100];
    fp=fopen(filename,"r");
    if(fp==NULL){
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
void *deleteLine(char (*p)[100],int min,int max){
    if(min>cnt || min<=0 || max>cnt || max<=0){
        printf("Invalid Range\n");
        exit(0);
    }
    int temp=min;
    while(temp<=max){
        memmove(p+min-1,p+min-1+1,(cnt-min)*sizeof(*p));
        cnt--;
        p=realloc(p,cnt*sizeof(*p));
        temp++;
    }
    return p;
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
    if(argc!=4){
        printf("Incorrect Input!\n");
        printf("exe  filename  linenum\n");
        exit(0);
    }
    lines = readFromFile(argv[1]);
    lines = deleteLine(lines,atoi(argv[2]),atoi(argv[3]));
    writeToFile(lines,argv[1]);
}
