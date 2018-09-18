#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // initialize Fibonacci sequence and even numbers total
    int total = 2;
    int a = 1;
    int b = 2;
    // c to generate next number in Fibonacci sequence
    int c;
    // terminate Fibonacci sequence before series reaches number greater than 4 million
    while (a + b <= 4000000)
    {
        c = a + b;
        // check to see if new numbers generated in sequence are even
        // if even, add to total
        if(c % 2 == 0)
        {
            total += c;
        }
        // set new a and b values to advance Fibonacci sequence
        a = b;
        b = c;
    }
    printf("%i \n", total);
    return 0;
}
