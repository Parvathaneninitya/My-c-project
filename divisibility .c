/*To check the divisibility condition among the two given numbers*/

#include<stdio.h>
int main(){
int i,a,b,X,Y;
printf("Enter the values");
scanf("%d%d",&X,&Y);
scanf("%d%d",&a,&b);
for(i=X;i<=Y;i++)
{if(i%a==0&i%b==0)
printf("%d is divisible by a and b\n",i);
else
printf("%d is not divisible by a and b\n",i);}}