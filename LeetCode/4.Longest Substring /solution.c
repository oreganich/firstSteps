    #include <stdio.h>
    #include <string.h>

int lengthOfLongestSubstring(char* s) {

        int length = strlen(s);
        int left = 0;
        int right = 0;
        int count[256] = {0};
        int res = 0;

        while (right < length ) {

            count[s[right]]++;

                while (count[s[right]] > 1) {
                    count[s[left]]--;
                    left++;
                }

            if (res < right - left + 1) {
                res = right - left + 1;
            }
            right++;
        }
            return res;
        }
