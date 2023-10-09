// Author : Swasti Gupta 191
// Assignment 1: Find the cheapest walnut in Raghunath Bazaar of Jammu.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int price;
    char name[30];
    struct node *next;
};
 
typedef struct node Node;
Node *head, *start, *list;

int num =0;
int insert();
int insert_cashew();
int cheapest();
int display();

int main(){
    int ch;
    do{
        printf("\nEnter\t\n");
		printf("1.To enter shop details of walnut\n");
		printf("2.To enter shop details of Cashew\n");
		printf("3.To display shop which sells cheapest walnut\n");
		printf("4.To display cost of walnut of all shops\n"); 
		printf("5.To Exit\n");    
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                insert();
                break;

            case 2:
                insert_cashew();
                break;
                
            case 3:
                cheapest();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("\nProcess ended.\n");
                break;

            default:
                printf("\n!!ERROR!!\n");
        }
    }while (ch != 5);
}

int insert()
{
    list=(Node*)malloc(sizeof(Node));        

    if(list==NULL){
        printf("\nRAM FULL!!\n");
    }else{
        printf("\nEnter shop name: ");
        scanf("%*c%[^\n]",&list->name);

        printf("\nEnter price of walnut: ");
        scanf("%d",&list->price);

        if(head == NULL){
            head = list ;
            head->next = NULL ;
        }else{
            if(head->price >= list->price){ //If the price is cheaper node will be added at first spot.
                list->next = head;
                head = list;
            }else{                  //If the price is not cheaper node will be added at second spot.
                list->next = head->next;
                head->next = list;
            }
        }
        num++;
    }
}

int insert_cashew()
{
    list=(Node*)malloc(sizeof(Node));        

    if(list==NULL){
        printf("\nRAM FULL!!\n");
    }else{
        printf("\nEnter shop name: ");
        scanf("%*c%[^\n]",&list->name);

        printf("\nEnter price of cashew: ");
        scanf("%d",&list->price);

        if(start == NULL){
            start = list ;
            start->next = NULL ;
        }else{
            if(start->price >= list->price){ //If the price is cheaper node will be added at first spot.
                list->next = start;
                start = list;
            }else{                  //If the price is not cheaper node will be added at second spot.
                list->next = start->next;
                start->next = list;
            }
        }
    }
}

int cheapest(){
       
    if(head==NULL)  
    {  
        printf("\nNo data present.\n");  
    }  
    else  
    {
        printf("\nShop that sells cheapest walnut in Raghunath Bazaar is %s at %d Rs.\n",head->name,head->price);
    }
}

int display(){
    list = head;   
    if(list==NULL)  
    {  
        printf("\nNo data present.\n");
    }  
    else  
    {  
        printf("\nData of all shops :\n");   
        
        while (list != NULL)
        {  
            printf("-->Shop name: '%s' sells walnut at %d Rs.\n", list->name, list->price);  
            list = list->next;
        }
    printf("\n-->Data of %d shops in Raghunath Bazaar is present.\n",num);
    } 
}

