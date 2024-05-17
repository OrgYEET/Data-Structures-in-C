//Postfix to Infix Evaluation 
//Input is string
//Output is integer
//by Simply

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct stack
{
    int a[100];
    int top;
    int size;
}s;

int pop()
{
    int out;
    if (s.top==-1)
        printf("Underflow");
    else
    {
        out=s.a[s.top];
        s.top--;
        return out;
    }  
}

void push(int in)
{
    if(s.top==s.size-1)
        printf("Overflow");
    else
    {
        s.top++;
        s.a[s.top]=in;
    }
}

void main()
{
    int final,res,num,x,y;
    char po[100],ch;
    s.top = -1;

    printf("Enter Postfix: ");
    scanf("%s",po);
    s.size=strlen(po);
    
    for (int i=0;i<s.size;i++)
    {
        ch = po[i];
        switch(ch)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                        num=ch-'0';
                        push(num);
                        break;

            case '+':
                        y = pop();
                        x = pop();
                        res = x+y;
                        push(res);
                        break;

            case '-':
                        y = pop();
                        x = pop();
                        res = x-y;
                        push(res);
                        break;

            case '*':
                        y = pop();
                        x= pop();
                        res = x*y;
                        push(res);
                        break;

            case '^':
                        y = pop();
                        x= pop();
                        res = pow(x,y);
                        push(res);
                        break;

            case '/':
                        y = pop();
                        x= pop();
                        if(y==0)
                        {
                            printf("Division by Zero not possible");
                            return;
                        }
                        else
                        {
                            res = x/y;
                        }
                        push(res);
                        break;

        }
    }
    
    final = pop();
    printf("Final result: %d",final);
}
