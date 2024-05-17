#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c, e, f, check=0;
    printf("Enter number to check");
    scanf("%d",&a);b=a;f=a;
    while(a>0)
    {
        a=a/10;e++;
    }
    printf("%d has %d digits",b,e);
    while(f>0)
    {
        c=f%10;f=f/10;
        check=check+pow(c,e);
    }
    if(check==b)
    {
        printf("\n%d is Armstrong",b);
    }
    else
    {
        printf("\n%d is not Arsmtrong",b);
    }
}