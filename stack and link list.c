
#include<stdio.h>
#include<stdlib.h>
struct a
{
    int data;
    struct a *link;
};
    struct a *head=NULL;
    struct a *second=NULL;
void push()
{

        struct a *node=NULL;
        node= (struct a*)malloc(sizeof(struct a));
        struct a *temp=NULL;
        temp= (struct a*)malloc(sizeof(struct a));
        temp=head;
        while(temp->link!=NULL)
        {
             temp=temp->link;
        }
        printf("enter the data");
        scanf("%d",&node->data);
        temp->link=node;
        node->link=NULL;

}
