#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;//Node type defined

main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	head = (node *)malloc(sizeof(node));
	create (head);//function call
	printf("\n");
	printf(head);
	printf("\n");
	printf("\nNumber of items = %d \n",count(head));
	 
}
void create(node *list)
{
	printf("\nInput a number:");
	printf("(\nType 0 to end):");
	scanf("%d",&list -> number);
	/*-------------------------------------------  CREATE CURRENT NODE ----------------------------------*/
	
	if(list->number == 0)
	{
		list-next = NULL;
	}
	else//create next node
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next); 
									/*Reccursion*/
	}
	return;
	}
	void print(node *list)
	{
		if(list->next !=NULL)
		{
			printf("%d-->",list->number);          /*print current item */
			if(list->next->next = = NULL)
			printf("%d",list->next->number);
			
			print(list->next);				//move to next item
			
		}
		return;
	}
	
	int count(node *list)
	{
		if(list->next==NULL)
		return (0);
		else
		return(1+count(list->next));
	}
