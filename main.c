//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that gets a string from the user and then displays it in reverse order.
 */

#include <stdio.h>
#include <string.h>

int main() {

    //Create a string with a fix number of characters.
    char string[1000];

    //Request the user a string and save it using the fgets function to avoid errors.
    printf("Please write anything(note that spaces count as characters):\n");
    fgets(string, sizeof(string), stdin);

    // This loop will give the string in the reverse order.
    for (int i = strlen(string) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}