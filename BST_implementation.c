#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
    int data;
    struct BST *left;
    struct BST *right;
}BST;

BST *insert_bst(BST *root)
{
    BST *newnode;
    newnode=(BST *)malloc(sizeof(BST));
    if(newnode==NULL)
    {
        printf("No Memory");
        return root;
    }
    printf("Enter tree data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        return newnode;
    }
    BST *curr,*prev;
    prev=NULL;
    curr=root;
    while(curr!=NULL)
    {
        prev=curr;
        if(newnode->data>=curr->data)
            curr=curr->right;
        else
            curr=curr->left;
    }
    if(newnode->data>=prev->data)
        prev->right=newnode;
    else
        prev->left=newnode;
    return root;
}

BST *delete_bst(BST *root)
{
    if(root==NULL)
    {
        printf("Tree Empty\n");
        return root;
    }
    int data;
    printf("Enter data to be deleted\n");
    scanf("%d",&data);
    BST *p,*suc,*parent,*cur;
    parent=NULL;
    cur=root;
    while(cur!=NULL && cur->data!=data)
    {
        parent=cur;
        if(data>=cur->data)
            cur=cur->right;
        else
            cur=cur->left;
    }
    if(cur==NULL)
    {
        printf("item not found\n");
        return root;
    }
    if(cur->left==NULL)
        p=cur->right;
    else if(cur->right==NULL)
        p=cur->left;
    else
    {
        p=cur->right;
        suc=cur->right;
        while(suc->left!=NULL)
            suc=suc->left;
        suc->left=cur->left;
    }
    if(parent==NULL)
    {
        free(root);
        return p;
    }
    if(parent->right==cur)
        parent->right=p;
    else
        parent->left=p;
    free(cur);
    return root;
}

void inorder(BST *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main()
{
    BST *root;
    int ch;

    root=NULL;
    while(1){
    printf("1)Insert 2)Delete 3)Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        root=insert_bst(root);
        break;
    case 2:
        root=delete_bst(root);
        break;
    case 3:
        inorder(root);
        printf("\n");
        break;
    }
    }
}
