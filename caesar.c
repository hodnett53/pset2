/************************************
* Program to encript plaintext using
* the Caesar cipher. 
*
* Enter the number key as a command
* line argument
*
* By:
* L. Hodnett
*************************************/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    // get key from command line arguement, return 1 if wrong
    if (argc < 2)
    {
        printf("No command line arguement entered!\n");
        return 1;
    }
    
    // change the number from a string to an integer
    int k = atoi(argv[1]);
    
    // error checking
    if (k < 1)
    {
        printf("Improper inputs!\n");
        return 1;
    }
    
    // get string from user
    char* text = GetString();
    
    // print cipher
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            // for uppercase letters
            if (isupper(text[i]))
            {
                int result = (text[i] + k - 65) % 26 + 65;
                printf("%c", result);
            }
            // for lowercase letters
            else
            {
                int result = (text[i] + k - 97) % 26 + 97;
                printf("%c", result);
            }
        }
        // for other characters
        else
            printf("%c", text[i]);
    }
    // print new line
    printf("\n");
}
