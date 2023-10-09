#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};


typedef struct node Node;
Node *head=NULL;


void push();
void pop();
void search();
void display();


int main()
{
    int choice;
    do
    {	
    	printf("\n\t  Main Menu!!!\n");
        printf("Enter 1 to push element  \n");
        printf("Enter 2 to pop element  \n");
        printf("Enter 3 to Search element of queue \n");
        printf("Enter 4 to Display element of queue \n");
        printf("Enter 5 to Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            		push();
            		break;
            case 2:
            		pop();
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

void push()
{
    Node *list;
    list=(Node *)malloc(sizeof(Node));
    int element;
    if(list==NULL)
    {
        printf(" Memory Space not avaliable\n");
        return;
    }
    printf("Enter the data value for the node:\n" );
    	scanf("%d",&element);
    list->data =element;
    list->next =NULL;
    if(head==NULL)
    {
        head=list;
    }
    else
    {
        list->next=head;
        head=list;
    }
}

void pop()
{
	Node *list;
    if(list==NULL)
    {
        printf("List is Empty:\n");
        return;
    }
    else
    {
        list=head;
        head=head->next ;
        printf("The deleted element is :%d\n",list->data);
            free(list);
    }
}

void search()  
{  
    Node *list, *count;  
    int value,i=0,temp;  
   	list = head;   
    if(list == NULL)  
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
    Node *list;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        list=head;
        printf("The List elements are:\n");
        while(list!=NULL)
        {
            printf("%d\n",list->data );
            list=list->next ;
        }
    }
}



