/*To find the largest number among the given four numbers*/
#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b&a>c&a>d)
   printf("a is biggest %d",a);
else if(b>a&b>c&b>d)
   printf("b is biggest %d",b);
else if(c>a&c>b&c>d)   
   printf("c is biggest %d",c);
else
   printf("d is biggest %d",d);}