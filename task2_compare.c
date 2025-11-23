#include <stdio.h>

int compare_arrays(int *a, int *b, int len) {
    if (!a || !b) return 0;
    for(int i = 0; i < len; i++) {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int x[] = {1, 2, 3, 4};
    int y[] = {1, 2, 3, 4};
    int z[] = {1, 2, 3, 5};
    
    printf("x == y ? %d\n", compare_arrays(x, y, 4));
    printf("x == z ? %d\n", compare_arrays(x, z, 4));
    
    return 0;
}
