/*To calculate the electricity bill according to the given information*/
#include<stdio.h>
int main(){
float bill=0,units;
printf("Enter the value of units:");
scanf("%f",&units);
if(units<=50){
bill=units*0.50;
printf("bill=%f",bill);}
else if(units<=150){
bill=25+((units-50)*0.75);
printf("bill=%f",bill);}
else if(units<=250){
bill=100+((units-50)*1.20);
printf("bill=%f",bill);}
else if(units>250){
bill=220+((units-250)*1.50);
printf("bill=%f",bill);}
else
printf("invalid input");}