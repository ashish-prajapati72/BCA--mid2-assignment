#include <stdio.h>
#include <string.h>
// Logic: Take first word as prefix, cut it till it matches others.
int main() {
    char strs[3][20] = {"flower", "flow", "flight"};
        char prefix[20];
            strcpy(prefix, strs[0]);
                for (int i = 1; i < 3; i++) {
                        while (strncmp(prefix, strs[i], strlen(prefix)) != 0) {
                                    prefix[strlen(prefix) - 1] = '\0';
                                            }
                                                }
                                                    printf("%s", prefix);
                                                        return 0;
                                                        }