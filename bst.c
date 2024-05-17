//Binary Search Tree
//implimented using linked lists
//with traversal in preorder
//by Simply

#include<stdio.h>
#include<stdlib.h>

struct bst                          //structure for binary search tree
{
    int data;
    struct bst *left;
    struct bst *right;
}*root,*temp,*q,*p;

struct bst *root=NULL;

void create(int item)                               //creating the tree by assigning root node
{
    root=(struct bst *)malloc(sizeof(struct bst));
    root->data=item;
    root->left=NULL;
    root->right=NULL;
}

void insert(int item)
{
    p=root;
    q=NULL;
    while(p!=NULL)                              //traverse too find location
    {
        if(p->data<item)
        {
            q=p;
            p=p->right;
        }
        else if(p->data>item)
        {
            q=p;
            p=p->left;
        }
        else
        {
            printf("Entry already exist");
            break;
        }
    }
    temp = (struct bst *)malloc(sizeof(struct bst));                //assign memory location temporarily
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(q==NULL)                                   //placing the node in the tree
    {
        root=temp;
    }
    else if(q->data<item)
    {
        q->right=temp;
    }
    else
    {
        q->left=temp;
    }
}

void preorder(struct bst *temp)                     //display using preorder traversal
{
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct bst *temp)                   //display using postorder traversal
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);
    }
}

void inorder(struct bst *temp)                   //display using inorder traversal
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}

void main()                                //main function
{
    int item,n,ch;
    printf("Creating BST, Enter Data for Root: ");
    scanf("%d",&item);
    create(item);
    while(1)                                //menu for insert and travers options
    {
        printf("1.Insert\n2.Preorder\n3.Postorder\n4.Inorder\n5.Exit\n:");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter number of leaves: ");
            scanf("%d",&n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter Data: ");
                scanf("%d", &item);
                insert(item);
            }
        }
        else if(ch==2)
        {
            preorder(root);
            printf("\n");
        }
        else if(ch==3)
        {
            postorder(root);
            printf("\n");
        }
        else if(ch==4)
        {
            inorder(root);
            printf("\n");
        }
        else
            break;
    }
}
