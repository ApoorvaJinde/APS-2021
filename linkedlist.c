#include <stdio.h>
#include <stdlib.h>
#define SS 5
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE * Insert_Start(NODE *start)
{
    NODE * newnode;
    int x;

    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("Memory Full\n");
        return start;
    }
    printf("Enter data to be inserted\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=start;
    return newnode;
}

NODE * Insert_End(NODE *start)
{
    NODE * newnode,*temp;
    int x;
    temp=start;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("Memory Full\n");
        return start;
    }
    printf("Enter data to be inserted\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;

    if(start==NULL)
        return newnode;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
        return start;
    }

}

NODE * Delete_End(NODE *start)
{
    if(start==NULL)
    {
        printf("List Empty\n");
        return NULL;
    }

    if(start->next==NULL)
    {
        free(start);
        return NULL;
    }
    NODE *curr=start,*prev=NULL;

    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    free(curr);
    return start;
}

NODE * Delete_Start(NODE *start)
{
    if(start==NULL)
    {
        printf("List Empty\n");
        return NULL;
    }
    NODE * temp=start;
    start=start->next;
    free(temp);
    return start;
}

void display(NODE * start)
{
    NODE *temp;
    temp=start;
    if(temp==NULL){
        printf("List Empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int ch;
    NODE *start;
    start=NULL;
    while(1)
    {
        printf("Menu\n");
        printf("1->Insert at Start 2->Insert at End\n3->Delete at Start 4->Delete at end 5->Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            start=Insert_Start(start);
            break;
        case 2:
            start=Insert_End(start);
            break;
        case 3:
            start=Delete_Start(start);
            break;
        case 4:
            start=Delete_End(start);
            break;
        case 5:
            display(start);
            break;
        }
    }
    return 0;
}
