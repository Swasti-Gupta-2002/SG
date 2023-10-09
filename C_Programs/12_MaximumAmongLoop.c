// A C Program for lmaximum nunber
#include <stdio.h>

int main(){
  int i,num,n,large=0;
  scanf("%d",&n); 
  printf("How many numbers: %d\n",n);
  for(i=0; i<n; i++)
  { //It will scan the numbers entered by user upto the limit setted by user.
    scanf("%d",&num);
    printf("\nEnter number %d: %d",i+1,num);
    if(num>large)
    large=num;
  }
  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.
  return 0;
}
