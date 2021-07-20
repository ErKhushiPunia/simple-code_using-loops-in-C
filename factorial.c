#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, fact = 1;
    printf("enter the number:");
    scanf("%d\n", &n);
    for (i = 0; i<= n; i++)
    {
        fact *= i;
    }
    printf("the factorial of %d is : %d",n,fact);
    return 0;
}