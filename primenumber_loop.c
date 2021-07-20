#include<stdio.h>
#include<conio.h>

int main(){
int n,i=1;
printf("enter the number:");
    scanf("%d\n", &n);
    for(i=2;i<n;i++){
           if(n%i==0){
            printf("its a not prime number");
             break;
        }
        else{
             printf("its a prime number");
             break;
        }
      
        i++;
    }
return 0;
}