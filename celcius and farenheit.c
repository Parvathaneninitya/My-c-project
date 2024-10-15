/*Celsius and Fahrenheit scale*/
#include<stdio.h>
int main()
{ float Fahrenheit, Celsius;
printf("Enter the value of Fahrenheit:");
scanf("%f",& Fahrenheit);


Celsius = ((Fahrenheit-32)*5)/9;
printf("Temperature in Celsius is : %f",Celsius);



printf("Enter the value of Celsius:");
scanf("%f",& Celsius);


Fahrenheit= ((Celsius/5)*9)+32;
printf("Temperature in Fahrenheit is : %f",Fahrenheit);}