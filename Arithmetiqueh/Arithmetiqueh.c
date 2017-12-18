#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DllExport   __declspec(dllexport)


int DllExport addition(int a, int b, int r)
{
    int r = 0;
    //printf("%d +%d = %d",a,b,a+b);
    //printf("\n");
    &r = &a + &b ;
return r;
}
/*int DllExport Soustraction(int a, int b)
{
    printf("%d - %d = %d",a,b,a-b);
    printf("\n");
}
int DllExport Multiplication(int a,int b)
{
    printf("%d * %d = %d",a,b,a*b);
    printf("\n");
}
int DllExport Division(int a,int b)
{
    printf("%d / %d = %d",a,b,a/b);
    printf("%d");
}
*/
