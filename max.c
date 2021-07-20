// Write a program to find the greatest of four numbers entered by the user.
#include<stdio.h>
#include<conio.h>

int main(){
float no1 ,no2,no3,no4;
printf("enter the four number:");
scanf("%f %f %f %f",&no1,&no2,&no3,&no4);
if(no1>no2 && no1>no3 && no1>no4){
    printf("the greatest number is %f",no1);
}
if(no2>no1 && no2>no3 && no2>no4){
    printf("the greatest number is %f",no2);
}
if(no3>no2 && no3>no1 && no3>no4){
    printf("the greatest number is %f",no3);
}
if(no4>no2 && no4>no3 && no4>no3){
    printf("the greatest number is %f",no4);
}
return 0;
}