#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
NODE *list, *head, *last, *temp;

void insert();
void display();
void delete();

int main()
{
    int ch;
    do
    {
        printf("\"PLEASE SELECT ANY OPTION BELOW\n\"");
        printf("1.Insert an Element in the Node\n");
        printf("2.Delete an element\n");
        printf("3.Display the list\n");
        printf("4.Exit the Program\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice...... Please try again\n");
            break;
        }
        printf("\n\n");
    } while (ch != 4);
    return 0;
}

void insert() 
{
    list = (NODE *)malloc(sizeof(NODE));
    printf("Enter the data : ");
    scanf("%d", &list->data);
    list->next = NULL;
    if (head == NULL)
    {
        head = list;
        last = list;
    }
    else
    {
        last->next = list;
        last = list;
        last->next = head;
    }
}

void display()
{
    list = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{    
            printf("%d ", list->data);  
            list = list->next;  
        }
		while(list != head);  
        printf("\n");  
    }  
}

void delete()
{
    temp = head;
    head = head->next;
    last->next = head;
    temp->next = NULL;
    free(temp);
}
