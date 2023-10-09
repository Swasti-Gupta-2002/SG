//A C Program to calculate Factorial of a number.
#include<stdio.h>  
int main(){ 
	int i,fact=1,number;     
 	scanf("%d",&number); //It will sacn the number entered by the user. 
 	printf("Enter a number: %d",number);     
    for(i=1;i<=number;i++)
    {    
    	fact=fact*i;    
  	}    
  	printf("\nFactorial of %d is: %d",number,fact);    
	return 0;  
} 
