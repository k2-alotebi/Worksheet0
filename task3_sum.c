#include <stdio.h>

int main(void) {
    FILE *f = fopen("foo.txt", "r");
    if(!f) {
        printf("Cannot open file\n");
        return 1;
    }
    
    int sum = 0, n;
    while(fscanf(f, "%d", &n) == 1) {
        sum += n;
    }
    
    fclose(f);
    printf("Sum = %d\n", sum);
    return 0;
}
