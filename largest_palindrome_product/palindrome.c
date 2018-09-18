#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max = 0;

int main(void)
{
  // iterate over all 3 digit numbers in lines 19-21
  for(int a = 100; a <= 999; a++)
  {
    for(int b = 100; b <= 999; b++)
    {
      int rev_array[10000];
      int for_array[10000];
      int c;
      int d;
      int same = 0;
      int m = 0;
      int prod = a * b;
      /* thanks to Zach Scrivena for the following formula converting an integer to an array of integers posted on stackoverflow on February 5, 2009 under the subject "convert an integer number into an array"
      */
      int n = prod;
      while(n != 0)
      {
        rev_array[m] = n % 10;
        n /= 10;
        m++;
      }
      // create the forward array of the ints in prod 
      for(c = m - 1, d = 0; c >= 0; c--, d++)
      {
        for_array[d] = rev_array[c];
      }
      // compare the forward and reverse arrays to see if they match exactly
      for(int e = 0; e < m; e++)
      {
        if(for_array[e] != rev_array[e])
        {
          // if they don't match then set same equal to 1 for following step
          same = 1;
        }
      } 
      /* if prod is greater than max and the forward and reverse arrays are identical, then replace max with prod
      */
      if(prod > max && same == 0)
      {
        max = prod;
      }
      // reset same and repeat the process
      same = 0;
      m = 0;
    }
  }
  // print the final, greatest number that fits the preceding criteria
  printf("new max: %i \n", max);
  return 0;
}

