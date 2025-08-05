//Cube of a number
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     printf("Cube of given number is :%d",number*number*number);
//     return 0;
// }


//ASCII code for the above C program
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a Char:");
//     scanf("%c",&ch);
//     printf("ASCII of given Character is :%d",ch);
//     return 0;
// }

//Code for givven number is even or odd
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Given number is Even");
//     }else{
//         printf("Given number is Odd");
//     }
//     return 0;
// }

// Boolean data type
// The C programming language does not have a built-in boolean data type.
// #include <stdio.h>
// #include <stdbool.h>  // Import the boolean header file 

// int main() {
//   bool isProgrammingFun = true;
//   bool isFishTasty = false;
//   printf("%d\n", isProgrammingFun);  // Returns 1 (true)
//   printf("%d", isFishTasty);         // Returns 0 (false)

//   return 0;
// }


#include <stdio.h>

int main()
{
    int n=5,a,b,A,B,x=5,s=0;
    for(a=1;a<=n;a++){
        for(b=-(n-1);b<n;b++){
            if((x <= a) && (s <= n)){
              printf("*");
              s++;
            }
            else{
              printf(" ");
            }
            x--;
        }
        x = 5;

        printf("\n");
    }
}

