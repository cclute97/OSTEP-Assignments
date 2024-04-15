#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    // CLA 1 -- num of mb of memory to use

    int *array;
    int mem_size;

    if (argc != 2) {
        fprintf(stderr, "Invalid num of args.  Exiting.\n");
        exit(1);
    }
    
    mem_size = atoi(argv[1]) * 1024 * 1024; // size in mb scaled to size in bytes
    printf("size in bytes: %d\npid: %d\n", mem_size, getpid());
    array = malloc(mem_size);

    while (1) { // run until killed
        for (int i = 0; i < mem_size / 4; i++) { // int is 4 bytes
            array[i] = 0; // touching each element
        }    
    } 
}