#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};


typedef struct node Node;
Node *front, *rear;


void enqueue();
void dequeue();
void search();
void display();


int main()
{
    int choice;
    do
    {	
    	printf("\n\t  Main Menu!!!\n");
        printf("Enter 1 to Enqueue \n");
        printf("Enter 2 to Dequeue \n");
        printf("Enter 3 to Search element of queue \n");
        printf("Enter 4 to Display element of queue \n");
        printf("Enter 5 to Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            		enqueue();
            		break;
            case 2:
            		dequeue();
            		break;
            case 3:
					search();
					break;		
            case 4:
            		display();
            		break;
            case 5:
            		printf("You have succesfully exited the Program");
                	break;
            default:
            		printf("The choise is not available ");
                	break;
                	
            return 0;
        } 
    } while (choice != 5);
} 

void enqueue()
{
    Node *list;
    list=(Node *)malloc(sizeof(Node));
    int element;
    if(list==NULL)
    {
        printf(" Memory Space not avaliable\n");
        return;
    }
    else
    {
    	printf("Enter the data value for the node:\n" );
    	scanf("%d",&element);
        list -> data = element;  
        if(front == NULL)  
        {  
            front = list;  
            rear = list;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = list;  
            rear = list;  
            rear->next = NULL;  
        }  
    }  
}

void dequeue()
{
	Node *list;
     if(front == NULL)  
    {  
        printf("\nEmpty list\n");  
        return;  
    }  
    else   
    {  
        list = front;  
        front = front -> next;  
        free(list);  
    }  
}

void search()  
{  
    Node *list, *count;  
    int value,i=0,temp;  
   	list = front;   
    if(front == NULL)  
    {  
        printf("Empty List\n");  
    }  
    else  
    {   
        printf("Enter Element which you want to search?\n");   
        scanf("%d",&value);  
        while (list!=NULL)  
        {  
            if(list->data == value)  
            {  
                printf("Element found at location %d \n",i+1);  
                temp=0; 
                break;
            }  
            else  
            {  
                temp=1;  
            }  
            i++;  
            list = list -> next;  
           
        }  
        if(temp==1)  
        {  
            printf("Element not found\n");  
        }  
    }          
}  

void display()
{
    struct node *list;  
    list = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(list != NULL)   
        {  
            printf("\n%d",list -> data);  
            list = list -> next;  
        }  
    }  
}



