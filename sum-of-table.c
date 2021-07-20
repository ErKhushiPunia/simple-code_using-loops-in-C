// Write a program to calculate the sum of the numbers occurring in the
//  multiplication table of 8.(Consider 8x1 to 8x10)
#include<stdio.h>
#include<conio.h>

int main(){
int i=1,n=8,sum=0,result;
for(i=1;i<=10;i++)
{
    result=n*i;
    sum+=result;
}
printf("the sum is:%d",sum);
return 0;
}