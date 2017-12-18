#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main()
{
    while (1)
    {
    int a,b = 0;
    int degree;
    char x;
    printf("Choissisez le type de calcul :");
    printf("\n [1]:Addition \n [2]:Soustraction \n");
    printf("\n [3]:Multiplication");
    printf("\n [4]:Division \n [5]:Derive \n [6}: EXIT");

    Menu(a, b, x);

    }
    return 0;
}
int Menu(int a,int b, int x, int degree)
{
      int r=0;
    scanf("%d", &x);
    scanf("%d%d", &a, &b);

    switch(x)
    {
        case 1:
           // printf("%d + %d = %d",a,b,a+b);
           // printf("\n");
           Addition(a, b);
            break;
        case 2:
            //Soustraction(a, b);
           // printf("%d - %d = %d",a,b,a-b);
           // printf("\n");
            break;
        case 3:
            //Multiplication(a, b);
           // printf("%d * %d = %d",a,b,a*b);
           // printf("\n");
            break;
        case 4:
            //Division(a, b);
           /* if (b == 0)
            {
                printf("Division par 0 impossible \n");
            }
            else
            {
            printf("%d / %d = %d",a,b,a/b);
            printf("\n");
            }*/
            break;
        case 5:
            break;
        default:
            printf("l'operateur selectioné n'est pas valide ! \n");
            break;

    }
     return r;
}
