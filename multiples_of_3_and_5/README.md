# multiples_of_3_and_5
This is my solution to the Multiples of 3 and 5 problem on Project Euler.

Origin: This program addresses a problem called “Multiples of 3 and 5” posted on Project Euler (https://projecteuler.net/problem=1).

Overall purpose: The problem states: “If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.”

How to use this program: Compile the program and enter “./multiples” in the command line. The answer to the problem will appear in the terminal window.

How it works: The program starts the sum at 0. It then iterates over ever number between 1 and 999 checking for multiples of 3 or 5 by using the modulo operator. If an integer in that range is found to be a multiple of 3 or 5, it is added to the sum. Once all numbers between 1 and 999 have been iterated over, the total sum is printed.
