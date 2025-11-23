#include <stdio.h>

void print_array(int *arr, int width, int height) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            printf("%d ", arr[i * width + j]);
        }
        printf("\n");
    }
}

int main(void) {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_array((int*)arr, 3, 2);
    return 0;
}
