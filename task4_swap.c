#include <stdio.h>
#include <string.h>

void swap(void *x, void *y, size_t size) {
    unsigned char tmp[size];
    memcpy(tmp, x, size);
    memcpy(x, y, size);
    memcpy(y, tmp, size);
}

int main(void) {
    int a = 10, b = 20;
    printf("Before: a=%d b=%d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After: a=%d b=%d\n", a, b);
    return 0;
}
