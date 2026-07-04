#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    long long reversed = 0;

    if (x < 0) {
        printf("Your Number is negative\n");
        return false;
    }

    int wert = x;

    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    if (reversed == wert)
    {
        printf("Number is  Palindrome : TRUE\n");
        return true;
    }
        printf("Number isn't Palindrome : FALSE\n");
        return false;
}
