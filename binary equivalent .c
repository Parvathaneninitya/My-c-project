*To convert a given decimal number to Binary form*/
#include<stdio.h>
int main(){
int rem,num,bin=0,i=1;
/*rem=remainder,num=number,bin=binary form,i=place value*/
printf("Enter the number:");
scanf("%d",&num);
while(num!=0){
rem=num%2;
num/=2;
bin=bin+(rem*i);
i*=10;}

printf("%d",bin);
}