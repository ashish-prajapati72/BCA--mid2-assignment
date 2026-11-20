#include <stdio.h>
// Logic: Same as Fibonacci. ways(n) = ways(n-1) + ways(n-2)
int main() {
    int n = 5;
        int a = 1, b = 1, c;
            for (int i = 2; i <= n; i++) {
                    c = a + b;
                            a = b;
                                    b = c;
                                        }
                                            printf("Ways = %d", b);
                                                return 0;
                                                }