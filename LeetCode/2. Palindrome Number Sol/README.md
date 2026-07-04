# Runtime O(log10(N))
# Memory O(1)
# Problem
{

Given an integer x, return true if x is a palindrome, and false otherwise.

}
While Loop
x = 1221

1. 1221 % 10 = 1
   1221 / 10 = 122
   reversed = 0 * 10 + 1
   reversed =  1

2. 122 % 10 = 2
   122 / 10 = 12
   reversed = 1 * 10 + 2
   reversed = 12		

3. 12 % 10 = 2
   12 / 10 = 1
   reversed = 12 * 10 + 2
   reversed = 122
	
4. 1 % 10 = 1	
   1 / 10 = 0
   reversed = 122 * 10 + 1
   reversed = 1221 
