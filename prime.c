/*To find a given number is prime or not*/
#include<stdio.h>
int main(){
int i,n,flag=0;
/*n=input number*/
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0)
flag+=1;}
if(n==0||n==1)
printf("%d is not a prime number",n);
else if(flag>2)
printf("%d is not prime number",n);
else
printf("%d  is prime number",n);}