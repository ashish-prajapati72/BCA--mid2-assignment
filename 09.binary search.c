#include <stdio.h>
// Logic: Use pointer start, end, mid. Cut array in half every time.
int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
        int target = 9, left = 0, right = 5;
            while (left <= right) {
                    int mid = (left + right) / 2;
                            if (nums[mid] == target) { printf("Found at %d", mid); return 0; }
                                    else if (nums[mid] < target) left = mid + 1;
                                            else right = mid - 1;
                                                }
                                                    printf("Not Found");
                                                        return 0;
                                                        }