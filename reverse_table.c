#include<stdio.h>
#include<conio.h>

int main(){
int x ,i, result;
printf("enter the number whose table you wanna know :\n");
scanf("%d",&x);
for(i=10;i>=1;i--){
    result = x*i;
      printf("%d*%d=%d\n",x,i,result);
}

return 0;
}