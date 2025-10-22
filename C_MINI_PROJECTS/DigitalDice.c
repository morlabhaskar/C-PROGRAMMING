#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
// Define colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

void printMenu() {
    printf("%s--------------------------------------------%s\n", YELLOW, RESET);
    printf("%s|        DICE ROLL SIMULATOR               |%s\n",CYAN, RESET);
    printf("%s--------------------------------------------%s\n", YELLOW, RESET);
    printf("%s|    Press any key to ROLL the dice        |%s\n", GREEN, RESET);
    printf("%s|   Enter 'Q' or 'q' to QUIT the program   |%s\n", RED, RESET);
    printf("%s--------------------------------------------%s\n", YELLOW, RESET);
}

void printDice(int num) {
    char *color;
    switch (num) {
        case 1: color = RED; break;
        case 2: color = GREEN; break;
        case 3: color = YELLOW; break;
        case 4: color = BLUE; break;
        case 5: color = MAGENTA; break;
        case 6: color = CYAN; break;
    }

    printf("%s------------\n", color);
    switch (num) {
        case 1:
            printf("|          |\n");
            printf("|    *     |\n");
            printf("|          |\n");
            break;
        case 2:
            printf("|  *       |\n");
            printf("|          |\n");
            printf("|       *  |\n");
            break;
        case 3:
            printf("|  *       |\n");
            printf("|    *     |\n");
            printf("|       *  |\n");
            break;
        case 4:
            printf("|  *    *  |\n");
            printf("|          |\n");
            printf("|  *    *  |\n");
            break;
        case 5:
            printf("|  *    *  |\n");
            printf("|    *     |\n");
            printf("|  *    *  |\n");
            break;
        case 6:
            printf("|  *    *  |\n");
            printf("|  *    *  |\n");
            printf("|  *    *  |\n");
            break;
    }
    printf("------------%s\n", RESET);
}

int main(){
    int num;
    char ch;
    while(1){
        printMenu();
        srand(time(0));
        ch = getchar();
        if(ch=='q' || ch=='Q'){
            break;
        }
        else if(ch=='\n'){
            num = (rand()%6)+1;
            printDice(num);
        }
    }
    printf("%sTHANKS FOR PLAYING%s",CYAN,RESET);
}
