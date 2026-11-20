#include <stdio.h>
#include <string.h>
// Logic: Two pointers, one from start, one from end, swap.
int main() {
    char s[] = "hello";
        int left = 0, right = strlen(s) - 1;
            while (left < right) {
                    char temp = s[left];
                            s[left] = s[right];
                                    s[right] = temp;
                                            left++; right--;
                                                }
                                                    printf("%s", s);
                                                        return 0;
                                                        }