# palindrome

This is my solution to the Largest palindrome product problem on Project Euler.

Origin: This program addresses a problem called “Largest palindrome product” posted on Project Euler (https://projecteuler.net/problem=4).

Overall purpose: The problem states: “A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.”

How to use this program: Compile the program and enter “./palindrome” in the command line. The answer to the problem will appear in the terminal window.

How it works: The program multiplies every three digit number from 100 to 999 by every three digit number from 100 to 999 and compares "forward" and "reverse" copies of each product to see if they are identical. After a reversed copy of the original product has been created, the program compares it with the original product one digit at a time to see if the two numbers are equal. For each iteration, if the forward and reverse copies are identical, the program stores a new largest palindrome product. If the copies are not identical, the program resets and moves on to the next iteration.   
