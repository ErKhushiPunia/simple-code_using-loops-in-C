#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("enter the number:");
    scanf("%d\n", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("the sum(1 to %d)is:%d", n, sum);
    return 0;
}