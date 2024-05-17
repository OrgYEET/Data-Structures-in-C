#include<stdio.h>
void main()
{
    int a,num,i;
    printf("enter number of rows");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+1)
    {
        for(a=1;a<=i;a=a+1)
        {
            printf("%d",a);
        }
    printf("\n");
    }
}