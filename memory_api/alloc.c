#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *array;

    array = (int *) malloc(100 * sizeof(int));

    for (int i = 1; i <= 10; i++) {
        array[i - 1] = i;
    }

    // Memory intentionally not freed
}