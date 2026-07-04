# Complexity O(log10(N))
# Memory O(1)
# Algorithm to reverse integers
while (!=0) //modulo works with negative integers as well (-105 % 10 = -5)

{
reversed = reversed * 10 + integer % 10
integer /= 10;
}

# Problem
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
