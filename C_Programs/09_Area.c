//A C Program to calculate Area/Perimeter calculator
#include <stdio.h>
#include <math.h>
int main(){
    char option;
    printf("Enter the mode of operation.\n 1.Perimeter of square.\n 2.Perimeter of rectangle.\n 3.Perimeter of circle.\n 4.Area of square.\n 5.Area of rectangle.\n 6.Area of circle.\n");
    scanf("%c", &option); //It will scan the operater entered by user.
    printf("%c \n", option);
    float value1, value2;
    printf("Enter values of the shape:\n");
    scanf("%f %f", &value1, &value2); //It will scan the numbers entered by user.
    switch(option) //Switch-Case Function used.
    {
        case'1':
            printf("Perimeter of square = %f", 4*value1);
            break;
        case'2':
            printf("Perimeter of rectangle = %f", 2*(value1+value2));
            break;
        case'3':
            printf("Perimeter of circle = %f", ((2*22*value1)/7));
            break;
        case'4':
            printf("Area of square = %f", value1*value1);
            break;  
        case'5':
            printf("Area of rectangle = %f", value1*value2);
            break;
        case'6':
            printf("Area of circle = %f", ((22*value1*value1)/7));
            break;
        default:
            printf("Error eccoured, Please input the values correctly!");   
    }
    return 0;
}
