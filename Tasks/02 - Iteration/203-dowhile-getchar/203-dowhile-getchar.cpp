#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
       

    } while ((userEnteredCharacter != 'q') && (userEnteredCharacter != 'Q'));            //Repeat if condition is met - note the != operator

    puts("Finished");
}
