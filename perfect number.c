/*To find a given number is PERFECT NUMBER or not*/
#include<stdio.h>
int main(){
int i,n,s=0;
/*n=input number,s=SUM*/
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<n;i++)
{ if(n%i==0){
s+=i;}}
if(s==n)
  printf("%d is a perfect number",n);
else
  printf("%d is not a perfect number",n);}