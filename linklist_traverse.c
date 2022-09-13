#include<stdio.h>  
#include<stdlib.h>  
void createNode(int);  
void traverse();  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\n1.Insert Node\n2.Traverse\n3.Exit\n4.Enter your choice:\n");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the element to insert:\n");  
            scanf("%d",&item);  
            createNode(item);  
            break;   
            case 2:  
            traverse();  
            break;   
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease enter a valid choice.\n");  
        }  
 
    }while(choice != 3);  
}  
void createNode(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted successfully!!\n");  
        }  
 
    }  
void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("List is Empty.");  
        }  
        else  
        {  
            printf("printing values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->data);  
                ptr = ptr -> next;  
            }  
        }  
    }
    