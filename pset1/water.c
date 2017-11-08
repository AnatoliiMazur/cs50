#include <stdio.h>
#include <cs50.h>

int main(void) {

    int bottelsInMinute = 12;

    int minutes = 0;

    do {
        printf("Enter time you spent in shower (in minutes): ");
        minutes = get_int();
    }
    while ( minutes < 0 );

    printf("You have used %i bottles of water.\n", minutes * bottelsInMinute);

}