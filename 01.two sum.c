#include <stdio.h>
// Logic: Check every pair, if sum = target, print index
int main() {
        int nums[] = {2, 7, 11, 15};
            int target = 9, n = 4;
                for (int i = 0; i < n; i++) {
                            for (int j = i + 1; j < n; j++) {
                                            if (nums[i] + nums[j] == target) {
                                                                printf("%d %d", i, j);
                                                                                return 0;
                                            }
                            }
                }
                    return 0;
}
                                            }
                            }
                }
}