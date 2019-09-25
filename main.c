#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
int main()
{
	struct node *temp1=NULL,*temp2=NULL,*temp3=NULL;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp2=(struct node*)malloc(sizeof(struct node));
	temp3=(struct node*)malloc(sizeof(struct node));
	temp1->info=2;
	temp1->next=temp2;
	printf("\ndata=%d		 present address=%u 	next address=%u",temp1->info,temp1,temp1->next);
	
//	temp2=(struct node*)malloc(sizeof(struct node));
	temp2->info=3;
	temp2->next=temp3;
	printf("\ndata=%d		 present address=%u 	next address=%u",temp2->info,temp2,temp2->next);
	
	//temp3=(struct node*)malloc(sizeof(struct node));
	temp3->info=4;
	temp3->next=NULL;
	printf("\ndata=%d		 present address=%u 	next address=%u",temp3->info,temp3,temp3->next);
	
}
