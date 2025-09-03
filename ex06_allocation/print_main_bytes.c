#include <stdio.h>

int main() {
    unsigned char *p = (unsigned char *)main;
    printf("First 16 bytes at address of main:\n");
    for (int i = 0; i < 16; i++) {
        printf("%02x ", p[i]);
    }
    printf("\n");
    return 0;
}