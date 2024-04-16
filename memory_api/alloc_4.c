#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int *data;

    data = (int *) malloc(100 * sizeof(int));

    for (int i = 0; i < 100; i++) {
        data[i] = i + 1;
    }

    int *middle_pointer = &data[50];
    free(middle_pointer);
    
}