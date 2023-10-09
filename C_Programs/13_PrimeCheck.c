// A C Program to check prime number
#include <stdio.h>
int main()
{
    int num, i, j=0;
    scanf("%d",&num);
 	printf("Enter number to check prime number or not:%d\n",num);
    i=2;
    while( i<=num/2)
    {
        // check for non prime number
        if(num%i==0)
        {
            j=1;
            break;
        }
        i++;
    }
 
    if (j==0)
        printf("%d is a prime number.",num);
    else
        printf("%d is not a prime number.",num);
 
    return 0;
    
}
