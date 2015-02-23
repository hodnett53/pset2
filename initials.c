#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // get full name
    string name = GetString();
    
    // error checking
    if (name != NULL)
    {        
        // print first initial
        printf("%c", toupper(name[0]));
        
        // prints any inital after a space
        for (int i = 0, n = strlen(name); i <= n; i++)
        {
            if (name[i] == ' ')
                printf("%c", toupper(name[i + 1]));
        }
        
        // returns a new line
        printf("\n");
    }
}
