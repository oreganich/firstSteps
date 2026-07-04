#include <stdint.h>
#include <stdio.h>
int reverse(int x) {
    long reversed = 0;
    if (x < INT32_MIN  || x > INT32_MAX)
    {
        return x;
    }
    
    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
        if (reversed > INT32_MAX || reversed < INT32_MIN) {
            return 0;
    }
    }
    return (int)reversed;
}
