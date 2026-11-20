#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Logic: Ignore space and symbols, compare left and right.
int main() {
    char s[] = "A man, a plan, a canal: Panama";
        int left = 0, right = strlen(s) - 1;
            while (left < right) {
                    while (left < right && !isalnum(s[left])) left++;
                            while (left < right && !isalnum(s[right])) right--;
                                    if (tolower(s[left]) != tolower(s[right])) {
                                                printf("Not Palindrome"); return 0;
                                                        }
                                                                left++; right--;
                                                                    }
                                                                        printf("Palindrome");
                                                                            return 0;
                                                                            }