#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int *data;

    data = (int *) malloc(100 * sizeof(int));

    for (int i = 0; i < 100; i++) {
        data[i] = i + 1;
    }

    free(data);

    printf("Printing element at index 50: %d\n", data[50]);
}