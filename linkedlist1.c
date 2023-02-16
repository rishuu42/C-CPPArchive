#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void linkedlisttraversal(struct node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->link;
    }
}
void question1(struct node* start)
{
    struct node* p;
    p=start->link->link;
    start->link->link=p->link;
    p->link->link=p;
    printf("\n%d ",start->link->link->link->link->data);
}
void question2(struct node* start)
{
    struct node* p;
    p=start->link->link->link;
    p->link->link->link=start;
    start->link->link=p->link->link->link;
    printf("\n%d ",start->link->link->link->data);
}
int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    head->data=6;
    head->link=second;
    second->data=7;
    second->link=third;
    third->data=8;
    third->link=fourth;
    fourth->data=9;
    fourth->link=fifth;
    fifth->data=10;
    fifth->link=NULL;
    linkedlisttraversal(head);
    question1(head);
    question2(head);
}