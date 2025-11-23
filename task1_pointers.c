#include <stdio.h>

int main(void) {
    // Part 1: 
    int n = 5;
    int *ptr_to_n = &n;
    (*ptr_to_n)++;
    printf("n = %d\n", n);
    
    // Part 2
    int arr[3] = {10, 30, 2000};
    int *p = arr;
    
    for(int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(p+i), (void*)(p+i));
    }
    
    return 0;
}
