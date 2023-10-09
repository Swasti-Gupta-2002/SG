//Author:Swasti Gupta
//Creation Date:26-05-21
//A C program to insert, delete & search an element in an user defined array 

#include <stdio.h>
void insert(int [],int number);
int delete(int [],int number);
void search(int [],int number);
 
int main()
{
	int arr[20], i, n, o;
	printf("Enter number of elements in array\n");
	scanf("%d", &n);
 
   	printf("Enter %d elements\n", n);
 
   	for (i = 0; i < n; i++)
    	scanf("%d", &arr[i]);
    
    do
        {
            printf("\nSelect Your choise\n\n");
            printf("Enter 1 to Insert a number\n Enter 2 to Deletion \n Enter 3 to Find a number\n Enter 4 to EXIT the Program \n");
            scanf("%d", &o);

        switch (o) 
		{
            
            case 1:                                          //Insertion
            	insertAtEnd(arr,n);
            	break;
 
            case 2:                                     //Deletion
				deleteElement(arr,n);
             	break;     
        		
            case 3:                                                 //SEARCH
             	searchElement(arr,n);
				break;

            case 4:
            	printf("You have succesfully exited the Program");
                break;
                
            default:
            	printf("The choise is not available ");
                break;
        
        	return 0;

        } 
        
    }while (o != 4);
}    

void insert(int arr[],int n) 
{
	int i, position, value;
	printf("Enter the location where you want to insert an element\n");
    	scanf("%d", &position);
 
    printf("Enter the value to insert\n");
    	scanf("%d", &value);
 
    for (i = n-1; i >= position-1; i--)
        arr[i+1] = arr[i];
 
    arr[position-1] = value;

    printf("The element present in the array are\n");
    for(i=0; i<n+1; i++)
        printf("%d \n", arr[i]);
}
int delete(int arr[],int n)
{
	int i, position;
	printf("Enter the location where you wish to delete element\n");
   	    scanf("%d", &position);
    
    if ( position >= n+1 )    
        printf("Deletion not possible.\n");
    
    else
        {    
            for ( i = position - 1 ; i < n - 1 ; i++ ) 
            	arr[i] = arr[i+1];        
        
            printf("The remaining element present in the array are\n");
        	for( i = 0 ; i <= n - 1 ; i++ )        
             	printf("%d\n", arr[i]);   
		}
}
void search(int arr[],int n)
{
	int i, s;
	printf("Enter a number to search\n");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
    if (arr[i] == s)    
    	{
    		printf("%d is present at location %d.\n", s, i+1);
        }
 	else
		{
    		printf("%d isn't present in the array.\n", s);
		}
	}
}


   
        
    
