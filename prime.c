#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // for (int i = 1; i < max; i++)
    // for (int i = 1; i < max; i++)
    // if number % i == 0 -> return False
    // else return true

    if (number == 2 || number == 3 || number == 5 || number == 7)
    {
        return true;
    }
    else if (number == 1 || number % 2 == 0 || number % 3 == 0 || number % 4 == 0 ||
             number % 5 == 0 || number % 6 == 0 || number % 7 == 0 || number % 8 == 0 ||
             number % 9 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
