#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cnt = 0;
void *readFromFile(char *filename) {
    char (*p)[100] = NULL;
    FILE *fp;
    char str[100];
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("%s not found\n", filename);
        exit(0);
    }
    while (fgets(str, sizeof(str), fp)) {
        
        p = realloc(p, (cnt + 1) * sizeof(*p));
        strcpy(p[cnt], str);
        cnt++;
    }
    fclose(fp);
    return p;
}
void *replace_sub_with_newsubstring(char (*lines)[100], char *sub, char *newsub) {
    int l1 = strlen(sub), l2 = strlen(newsub);
    for (int i = 0; i < cnt; i++) {
        char *ptr = lines[i];
        while ((ptr = strstr(ptr, sub)) != NULL) {
            int t = strlen(ptr + l1); 
            if ((l2 > l1)||(l2 < l1)) {
                memmove(ptr + l2, ptr + l1, t + 1);
            }
            strncpy(ptr, newsub, l2);
            ptr += l2;
        }
    }
    return lines;
}
void writeToFile(char (*p)[100], char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Unable to open %s for writing.\n", filename);
        return;
    }
    for (int i = 0; i < cnt; i++) {
        fputs(p[i], fp);
    }
    fclose(fp);
}
int main(int argc, char *argv[]) {
    char (*lines)[100] = NULL;
    if (argc != 4) {
        printf("Usage: %s <filename> <oldsubstring> <newsubstring>\n", argv[0]);
        exit(0);
    }
    lines = readFromFile(argv[1]);
    lines = replace_sub_with_newsubstring(lines, argv[2], argv[3]);
    writeToFile(lines, argv[1]);
    free(lines);
    printf("Replacement done successfully.\n");
    return 0;
}

/*
abcdjhabcdss
kjiabcdhrbcdkl

abhaskarjhabhaskarss
kjiabhaskarhrbhaskarkl
  
*/
