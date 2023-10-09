// A C Program to calculate sum of digits
  
#include<stdio.h>  // Pre-Prossive to include standard input and out put header files funtions
 int main()    
{    // Start Of mail body
int n,sum=0,i;    
scanf("%d",&n);  
printf("Enter a number:%d\n",n);      
while(n>0)    // Loop started 
{    
i=n%10;    
sum=sum+i;    
n=n/10;    
}    // Loop ended 
printf("Sum is=%d",sum);   // Printing Sum of Digits 
return 0;  
}   
