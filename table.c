#include<stdio.h>
#include<conio.h>

int main(){
int x , i=11 , result;
printf("enter the number whose table you wanna know :\n");
scanf("%d",&x);
while(i<=10){
    result=x*i;
    printf("%d*%d=%d\n",x,i,result);
    i++;
}
return 0;
}