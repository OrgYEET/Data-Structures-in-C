#include <stdio.h>

int isPlaindrome(char,int);

void main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int length = 0;
    for (length = 0; input[length] != '\0'; length++);

    if (isPalindrome(input, length))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}

int isPalindrome(char str[], int length)
{
    int start,end,length;
    for (start = 0, end = length - 1; start < end; start++, end--)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
    }
    return 1; 
}


