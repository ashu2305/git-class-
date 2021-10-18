#include<stdio.h>
#include<stdlib.h>
struct a
{
    int exp,cof;
    struct a *link;
};
struct a *head1=NULL;
struct a *head2=NULL;
struct a *head=NULL;
struct a *temp=NULL;
struct a *node;
struct a *no=NULL;

void ins(struct a *head)
{
    temp=(struct a*)malloc(sizeof(struct a));
    temp=head;
    while(1)
    {
        printf("Press 1 to enter more ");
        int q;
        scanf("%d",&q);
        if(q==1)
        {

            temp=temp->link;
            temp=(struct a*)malloc(sizeof(struct a));
            printf("enter the exponent  ");
            scanf("%d",& temp->exp);
            printf("enter the coefficient ");
            scanf("%d",& temp->cof);

        }
        else
            break;
    }
    head=temp;
}
/*void show(struct a *node)
{


    while(node->link != NULL)
        {

        printf("%dx^%d", node->cof, node->exp);
        node = node->link;
        if(node->link != NULL)
            printf(" + ");
        }
}*/
void display(struct a *no)
{
    temp= (struct a*)malloc(sizeof(struct a));
    temp=no;
    if(head==NULL)
    {
        printf("empty");
        exit;
    }
    printf("the list is:\n");
    while(temp->link!=NULL)
    {

        printf("dfs%d x %d\n",temp->cof,temp->exp);
        temp= (struct a*)malloc(sizeof(struct a));
        temp=temp->link;
    }
    printf("%d x %d\n",temp->cof,temp->exp);

}

int main()
{
   head1=(struct a*)malloc(sizeof(struct a));

    printf("enter first polytempmial");
    printf("enter the exponent  ");
    scanf("%d",&head1->exp);
    printf("enter the coefficient ");
    scanf("%d",&head1->cof);
    ins(head1);

    head2=(struct a*)malloc(sizeof(struct a));

    printf("enter second polytempmial");
    printf("enter the exponent  ");
    scanf("%d",&head2->exp);
    printf("enter the coefficient ");
    scanf("%d",&head2->cof);
    ins(head2);
    printf("abcd");
    display(head1);
    printf("ehgf");
    display(head2);


    while(head1->link==NULL&&head2->link==NULL)
    {
        head=(struct a*)malloc(sizeof(struct a));

        if(head1->exp > head2->exp)
        {
           head->exp=head1->exp;
           head->cof=head1->cof;
           head1=head1->link;
           printf("6");
        }
        if(head2->exp > head1->exp)
        {
           head->exp=head2->exp;
           head->cof=head2->cof;
           head2=head2->link;
        }
        if(head1->exp = head2->exp)
        {
            printf("2");
            head->exp=head1->exp;
            head->cof=head1->cof + head2->cof;
            head1=head1->link;
            head2=head2->link;
        }

        head=head->link;
        head->link=NULL;


    }
    while(head1->link==NULL||head2->link==NULL)
    {
        head=(struct a*)malloc(sizeof(struct a));
        printf("rthd");
        if(head1->link)
        {
             head->exp=head1->exp;
            head->cof=head1->cof;
            head1=head1->link;
        }
        if(head2->link)
        {
            head->exp=head2->exp;
            head->cof=head2->cof;
            head2=head2->link;
        }

        head=head->link;
        head->link=NULL;
    }

   display(head);
}
