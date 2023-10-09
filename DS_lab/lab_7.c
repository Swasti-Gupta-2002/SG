#include <stdio.h>

     
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
 
 
struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;
Node *head=NULL;

int main()     
{
    int choice;
    do
    {   
        printf("\t!!!!! MENU !!!!!\n");
        printf("Select the function you want to perform :\n");
        printf("n--------------------------------------n");
        printf(" 1.Display the list \n");
        printf(" 2.Insert at the beginning \n");
        printf(" 3.Insert at the end \n");
        printf(" 4.Insert at specified position \n");
        printf(" 5.Delete from beginning \n");
        printf(" 6.Delete from the end \n");
        printf(" 7.Delete from specified position \n");
        printf(" 8.Search the info from the list \n");
        printf(" 9.Exit \n");
        printf("n--------------------------------------n");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
            switch(choice)
            {                   
                case 1:
                        display();
                            break;
                                
                case 2: 
                        insert_begin();
                            break;
                                
                case 3:
                        insert_end();
                            break;
                                
                case 4:
                        insert_pos();
                            break;
                                
                case 5:
                        delete_begin();
                            break;
                                
                case 6:
                        delete_end();
                            break;
                                
                case 7:
                        delete_pos();
                            break;
                                        
                case 8:
                        search();
                        	break;
                        				
                case 9:  	
                    	printf("You have succesfully exited the Program");
                            break;
                             
                default:
                        printf(" \t !!!!!Wrong Choice!!!! \n");
                            printf("Please, enter your choice again\n");
                            break;
                return 0;                    
            }
    }
    while (choice != 9);
}

void insert_begin()
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

void insert_end()
{
    Node *list,*temp;
    temp=(Node *)malloc(sizeof(Node));
    int element;
    if(list==NULL)
    {
        printf(" Memory Space not avaliable\n");
        return;
    }
    printf("Enter the data value for the node:\n" );
    	scanf("%d",&element );
    list->data =element;
    list->next =NULL;
    if(head==NULL)
    {
        head=list;
    }
    else
    {
        temp=head;
        while(temp->next !=NULL)
        {
            temp=temp->next ;
        }
        temp->next =list;
    }
}

void insert_pos()
{
    Node *list,*temp;
    int i,pos;
    list=(Node *)malloc(sizeof(Node));
    int element;
    if(temp==NULL)
    {
        printf(" Memory Space not avaliable\n");
        return;
    }
    
    printf("Enter the position for the new node to be inserted:\n");
        scanf("%d",&pos);
    printf("Enter the data value of the node:\n");
        scanf("%d",&element);
    list->data =element;
  	list->next=NULL;
    if(pos==0)
    {
        list->next=head;
        head=list;
    }
    else
    {
    	temp=head;
        for(i=0;i<pos-1;i++) 
		{ 
			temp=temp->next;
            if(temp==NULL)
            {
                printf("Position not found:[Handle with care]\n");
                return;
            }
        }
        list->next =temp->next ;
        temp->next=list;
    }
}

void delete_begin()
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

void delete_end()
{
    Node *list,*temp;
    if(head==NULL)
    {
        printf("List is Empty:\n");
        return;
    }
    else if(head->next ==NULL)
    {
        temp=head;
        head=NULL;
        printf("The deleted element is:%d\n",temp->data);
            free(temp);
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            list=temp;
            temp=temp->next;
        }
        list->next=NULL;
        printf("The deleted element is:%d\n",temp->data);
        	free(temp);
    }
}

void delete_pos()
{
    int i,pos;
    Node *list, *temp;
    if(head==NULL)
    {
        printf("The List is Empty:\n");
        return;
    }
    else  
    {
        printf("Enter the position of the node to be deleted:\n");
            scanf("%d",&pos);
        if(pos==0)
        {
            temp=list;
            head=head->next ;
            printf("The deleted element is:%d\n",temp->data  );
                free(temp);
        }
        else
        {
            temp=head;
            for(i=0;i<pos;i++) 
			{ 
				list=temp; 
				temp=temp->next ;
                if(temp==NULL)
                {
                    printf("Position not Found:\n");
                        return;
                }
            }
            list->next =temp->next ;
            printf("The deleted element is:%d\n",temp->data );
                free(temp);
        }
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




