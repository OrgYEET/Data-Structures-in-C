#include <stdio.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

void main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int length = 0;
    while (input[length] != '\0')
    {
        length++;
    }

    if (isPalindrome(input, length)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}
