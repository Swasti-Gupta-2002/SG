//A C Program to check arnstrong number.
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
int main() {
  int n, num, rem, res = 0;//Declaring variables of integer data type
  printf("Enter a three-digit integer: \n");//Printf function calling to print a three digit integer
  scanf("%d", &n);//It will scan the operater entered by user.
  num = n;
//start of while loop
  while (num != 0) {
     //Formula
     // remainder contains the last digit
    rem = num % 10;

    res += rem * rem * rem;

       // removing last digit from the orignal number
    num /= 10;
  }

  if (res == n)//if statement
      printf("%d is an Armstrong number.", n);//printf function calling to print an armstrong number
  else//else statement
      printf("%d is not an Armstrong number.", n);//printf function calling to print not an armstrong number

  return 0;//return statement
}//End of main function body 
