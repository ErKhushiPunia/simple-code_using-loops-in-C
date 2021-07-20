// 4.	Write a program to find whether a year entered by the user is a leap year or not.
//  Take the year as input from the user.
#include<stdio.h>
#include<conio.h>

int main(){
int year;
printf("enter the year");
scanf("%d",&year);
if(year%400==0){
    printf("the year is leap year.");
}
else if(year%100==0){
    printf("the year is not leap year.");
}
else if(year%4==0){
    printf("the year is leap year.");
}
else {
    printf("the year is not leap year.");
}
return 0;
}