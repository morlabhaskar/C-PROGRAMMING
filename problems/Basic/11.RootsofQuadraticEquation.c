#include <stdio.h>
#include <math.h>

int main(){

    double a,b,c,discriminant,root1,root2,realPart,imgPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)/(2*a));
        root2 = (-b - sqrt(discriminant)/(2*a));
        printf("Root1 = %.2lf and Root2 = %.2lf",root1,root2);
    }
    else if (discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("Root1 = Root2 = %.2lf",root1);
    }
    else{
        realPart = -b/(2*a);
        imgPart = sqrt(-discriminant)/(2*a);
        printf("Root1 = %.2lf + %.2lfi\n",realPart,imgPart);
        printf("Root2 = %.2lf - %.2lfi",realPart,imgPart);
    }
    

    return 0;
}

//OP : Enter coefficients a, b and c: 1 -7 10
//Root1 = 5.00 and Root2 = 2.00