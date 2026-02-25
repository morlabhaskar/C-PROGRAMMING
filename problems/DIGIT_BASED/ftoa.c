#include<stdio.h>
void ftoa(float f,char *buff,int after){
    int ipart=(int)f;
    float fpart = f-ipart;
    int i=0;
    if(ipart==0){
        buff[i++]='0';
    }
    while(ipart){
        buff[i++]=(ipart%10)+'0';
        ipart /= 10;
    }
    for(int j=0,k=i-1;j<k;j++,k--){
        char t=buff[j];
        buff[j]=buff[k];
        buff[k]=t;
    }
    if(after>0){
        buff[i++]='.';
        for(int j=0;j<after;j++){
            fpart = fpart*10;
            buff[i++]=((int)fpart)+'0';
            fpart =fpart - (int)fpart;
        }
    }
    buff[i++]='\0';
}
int main(){
    float f;
    char buff[20];
    printf("Enter the Float Value :\n");
    scanf("%f",&f);
    printf("Float : %f\n",f);
    ftoa(f,buff,3);
    printf("String : %s\n",buff);
}