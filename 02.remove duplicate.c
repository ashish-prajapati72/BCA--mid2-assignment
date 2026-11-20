#include <stdio.h>
// Logic: Use slow and fast pointer. Slow keeps unique values.
int main() {
    int nums[] = {1, 1, 2, 2, 3};
        int n = 5, slow = 0;
            for (int fast = 1; fast < n; fast++) {
                    if (nums[fast] != nums[slow]) {
                                slow++;
                                            nums[slow] = nums[fast];
                                                    }
                                                        }
                                                            printf("Length = %d", slow + 1);
                                                                return 0;
                                                                }