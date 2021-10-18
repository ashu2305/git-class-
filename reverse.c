#include<stdio.h>
#include<stdlib.h>
struct a
{
    int data;
    struct a *link;
};
    struct a *head=NULL;
    struct a *second=NULL;
    struct a *temp=NULL;
    struct a *node=NULL;
    struct a *t;
void ins_end()
{
    temp= (struct a*)malloc(sizeof(struct a));
    node= (struct a*)malloc(sizeof(struct a));
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
void ins_front()
{
    node= (struct a*)malloc(sizeof(struct a));
    printf("enter the data");
    scanf("%d",&node->data);
    node->link=head;
    head=node;
    temp=node;


}
void ins_mid()
{
    temp= (struct a*)malloc(sizeof(struct a));
    node= (struct a*)malloc(sizeof(struct a));
    int m;
    scanf("%d",&m);
    int i;
    for(i=1;i<(m-1);i++)
    {
        temp=temp->link;
    }
     printf("enter the data");
    scanf("%d",&node->data);
    node->link=temp->link;
    temp->link=node;
}
void del_front()
{
    temp= (struct a*)malloc(sizeof(struct a));
    temp=head;
    temp=temp->link;
    head=temp;
}
void del_end()
{
    temp= (struct a*)malloc(sizeof(struct a));
     t= (struct a*)malloc(sizeof(struct a));
    temp=head;
    while(temp->link!=NULL)
    {
        t=temp;
        temp=temp->link;
    }
    free(t->link);
    t->link=NULL;
}
void del_mid()
{
    temp= (struct a*)malloc(sizeof(struct a));
     t= (struct a*)malloc(sizeof(struct a));
    temp=head;
    printf("enter the place where you want to delete A node");
    int m;
    scanf("%d",&m);
    int i;
    for(i=1;i<(m);i++)
    {
        t=temp;
        temp=temp->link;
    }
    t->link=temp->link;
}
void reverse()
{
    temp= (struct a*)malloc(sizeof(struct a));
     t= (struct a*)malloc(sizeof(struct a));
    t=head;
    temp=head;
    temp=temp->link;
    head=temp;
    t->link=NULL;
    while(temp->link!=NULL)
    {
        head=temp->link;
        temp->link=t;
        t=temp;
        temp=head;
    }
    temp->link=t;
}
void display()
{
    temp= (struct a*)malloc(sizeof(struct a));
    temp=head;
    if(head==NULL)
    {
        printf("empty");
        exit;
    }
    printf("the list is:\n");
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);

}
void swapping()
{
        temp= (struct a*)malloc(sizeof(struct a));
        t= (struct a*)malloc(sizeof(struct a));
        t=head;
        temp=head;
        temp=temp->link;
        while(1)
        {
            t->data=t->data+temp->data;
            temp->data=t->data-temp->data;
            t->data=t->data-temp->data;
             if(temp->link==NULL)
            {
                break;
            }
            t=temp;
            temp=temp->link;

            if(temp->link==NULL)
            {
                break;
            }
            t=temp;
            temp=temp->link;
        }

}
int main()
{
    head=(struct a*)malloc(sizeof(struct a));
    second=(struct a*)malloc(sizeof(struct a));
    second->link=NULL;
    head->link=second;
    printf("enter the data ");
    scanf("%d",&head->data);
    printf("enter the data ");
    scanf("%d",&second->data);
    while(1)
    {
       printf("enter\n 1. insertion from front\n 2. insertion at end \n 3. insertion at any position\n 4. deletion from front\n 5. deletion from end\n 6. deletion from any position\n 7. reverse of list\n 8. display\n 9. swapping\n 0. exit\n");
       int s;
       scanf("%d",&s);
       switch(s)
       {
       case 1:
        ins_front();
        break;
       case 2:
        ins_end();
        break;
       case 3:
        ins_mid();
        break;
       case 4:
        del_front();
        break;
       case 5:
        del_end();
        break;
       case 6:
        del_mid();
        break;
       case 7:
        reverse();
        break;
       case 8:
        display();
        break;
       case 9:
        swapping();
        break;
       case 0:
        exit(0);
       default:
        exit;
       }
    }
}
