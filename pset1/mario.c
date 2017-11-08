#include <stdio.h>
#include <cs50.h>

int main(void) {

    int height;

    do {
        printf("Height: ");
        height = get_int();
    }
    while( height < 0 || height > 23 );

    for ( int i = 0; i < height; i++ ) {
        for ( int n = height - i; n > 1; n-- ) {
            printf(" ");
        }
        for ( int k = -2; k < i; k++ ) {
            printf("#");
        }
        printf("\n");
    }

}