//ite a program to determine whether a character entered by the user is lowercase or not.
#include<stdio.h>
#include<conio.h>

int main(){
char letter;
printf("enter a alphabet:");
scanf("%c",&letter);
if(letter>='a'&& letter<='z'){
    printf("\n Given alphabet is lowercase.");
}
else{
    printf("\n Given alphabet is not lowercase.");
}
return 0;
}