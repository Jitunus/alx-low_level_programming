#include <stdio.h>

char* strcpy(char* dest, const char* src) {
    char* dest_start = dest;
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest_start;
}

int main() {
    char src[] = "Hello, world!";
    char dest[20];
    printf("Before strcpy: dest = %s\n", dest);
    strcpy(dest, src);
    printf("After strcpy: dest = %s\n", dest);
    return 0;
}
