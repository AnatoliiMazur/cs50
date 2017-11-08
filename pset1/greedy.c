#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float amount;
    int coins_returned;

    do
    {
        printf("How much change is owed?\n");
        amount = get_float();

    } while (amount < 0);

    int cents = round(amount * 100);

    coins_returned = cents/25;
    cents %= 25;

    coins_returned += cents/10;
    cents %= 10;

    coins_returned += cents/5;
    cents %= 5;

    coins_returned += cents;

    printf("%i\n", coins_returned);
}