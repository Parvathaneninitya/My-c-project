/*To verify the given number is palindrome or not*/
#include<stdio.h>
int main(){
 int num,rev=0,ori,rem;
 /*num=number,rev=reverse,ori=original number,rem=remainder*/
 printf("Enter a number:");
 scanf("%d",&num);
 ori=num;
 for(;num!=0;)
 {rem=num%10;
 rev=rev*10+rem;
 num/=10;}
 if(ori==rev)
 printf("%d is palindrome\n",ori);
 else
 printf("%d is not a palindrome\n",ori);}