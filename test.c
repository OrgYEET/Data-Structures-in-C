#include <stdio.h>

int size;
int tree[20];
int temp;
int j=0;

void create()
{
    for(int i=0; i<size; i++)
    {
        printf("Enter Data: ");
        if(i==0)
        {
            scanf("%d",&tree[0]);
        }
        else if(i==1)
        {
            scanf("%d",&temp);
            if(temp>tree[j])
            { 
                j=(2*j)+2;
                tree[j]=temp;
                j=0;
            }
            else if(temp<tree[j])
            {
                j=(2*j)+1;
                tree[j]=temp;
                j=0;
            }
        }
        else if(i==2)
        {
            scanf("%d",&temp);
            if(temp>tree[j])
            { 
                j=(2*j)+2;
                tree[j]=temp;
                j=1;
            }
            else if(temp<tree[j])
            {
                j=(2*j)+1;
                tree[j]=temp;
                j=1;
            }
        }
    }
}

void display()
{
    printf("the list is:\n");
    for(int i=0; i<20; i++)
    {
        printf("%d  ",tree[i]);
    }
}
void main()
{

printf("enter the number of elemenmts in tree:");
scanf("%d",&size);

create();
display();
}

