// A C Program to calculate fibonacci series
#include<stdio.h>

int main(){
   int n, first = 0, second = 1, temp, i; //For the reference to the formuls of the series.

   scanf("%d",&n); //This will scan (read) the number entered by user.
   printf("Enter the number of terms: %d\n",n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( i = 0 ; i< n ; i++ ) //ForLoop function for the reference to the formuls of the series.
   {
      if ( i <= 1 )
      temp = i;
      else
      { //Formula to print the series.
         temp = first + second;
         first = second;
         second = temp;
      }
      printf("%d\n",temp); //This will give the outpu.
   }
   return 0;
} 
