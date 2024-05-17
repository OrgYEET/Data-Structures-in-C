//Selection Sort & Quick sort
//implementation using array
//by Simply

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int arr[100];

int smallest(int k, int n, int pos)
{
    int small;
    small = arr[k];
    pos = k;
    for(int j=k+1; j<n; j++)
    {
        if(small > arr[j])
        {
            small = arr[j];
            pos = j;
        }
    }
    return pos;
}

void selection(int n)
{
    int pos=0,temp;
    for(int k=0; k<=n-1; k++)
    {
        pos = smallest(k,n,pos);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}

int partition(int p, int r)
{
    int pivot = arr[p];
    int left = p+1;
    int right = r;

    while(left<=right)
    {
        while(left<=r && arr[left]<=pivot)
        {
            left++;
        }
        while(right>=p && arr[right]>pivot)
        {
            right--;
        }
        if(left<right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    int temp = arr[p];
    arr[p] = arr[right];
    arr[right] = temp;

    return right;
}

void quick(int pivot, int right)
{
    if(pivot < right)
    {
        int q = partition(pivot,right);
        quick(pivot,q-1);
        quick(q+1,right);
    }
}

void display(int size)
{
    printf("The current array is:");
    for(int i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

void main()
{
    int size,ch;
    while(1)
    {
        printf("1.Define New Array\n2.Selection Sort\n3.Quick Sort\n4.Exit: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter array limit: ");
            scanf("%d",&size);
            for(int i=0; i<size; i++)
            {
                printf("Enter: ");
                scanf("%d",&arr[i]);
            }
            display(size);
        }
        else if(ch==2)
        {
            selection(size);
            display(size);
        }
        else if(ch==3)
        {
            quick(0,size-1);
            display(size);
        }
        else
        {
            break;
        }
    }
    

}