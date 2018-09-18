// add basic C functions with stdio.h
#include <stdio.h>

// no command line argument needed
int main(void)
{
    // begin the total sum at 0
    int sum = 0;
    // iterate over numbers 1 to 999
    for (int i = 1; i < 1000; i++)
    {
        // check for multiples of 3 or 5 with modulo
        if (i % 3 == 0 || i % 5 == 0)
        {
            // add those multiples to the sum
            sum += i;
        }
    }
    // print the sum
    printf("Sum: %i \n", sum);
}
