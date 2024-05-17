#include <stdio.h>

int n, a[100],b[100];


void display()
{
        printf(" The list is: \n");
        for(int i=0;i<n;i++)
            printf("%d  ",b[i]);
        printf("\n");

}
void merge(int low,int mid,int high)
{
    int p;
    int j = mid+1;
    int i=low;
    int k= low;

    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
        
        if (i>mid)
        {
            for (p = low; p <= high; p++)
                b[k++] = a[p];
        }
        else
        {
            for (p = i; p <= mid; p++)
                b[k++] = a[p];
        }

        
    }
    for (p=low;p<=high;p++)
            a[p]=b[p]; 
   
}

void sort(int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        sort(low,mid);
        sort(mid+1,high);
        merge(low,mid,high);


    }
}



void main()
{
    int low, high;
    printf("enter the number of elements in the list : ");
    scanf("%d",&n);
    printf("enter the elements one by one :");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(0,n-1);
    
    display();
}